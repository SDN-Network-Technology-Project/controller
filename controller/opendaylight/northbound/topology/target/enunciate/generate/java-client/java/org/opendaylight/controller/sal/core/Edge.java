/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.sal.core;

/**
 * (no documentation provided)
 */
@javax.xml.bind.annotation.XmlType (
  name = "edge",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "edge",
  namespace = ""
)
public class Edge implements java.io.Serializable {

  private org.opendaylight.controller.sal.core.NodeConnector _headNodeConnector;
  private org.opendaylight.controller.sal.core.NodeConnector _tailNodeConnector;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "headNodeConnector",
    namespace = ""
  )
  public org.opendaylight.controller.sal.core.NodeConnector getHeadNodeConnector() {
    return this._headNodeConnector;
  }

  /**
   * (no documentation provided)
   */
  public void setHeadNodeConnector(org.opendaylight.controller.sal.core.NodeConnector _headNodeConnector) {
    this._headNodeConnector = _headNodeConnector;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "tailNodeConnector",
    namespace = ""
  )
  public org.opendaylight.controller.sal.core.NodeConnector getTailNodeConnector() {
    return this._tailNodeConnector;
  }

  /**
   * (no documentation provided)
   */
  public void setTailNodeConnector(org.opendaylight.controller.sal.core.NodeConnector _tailNodeConnector) {
    this._tailNodeConnector = _tailNodeConnector;
  }

}
