/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.containermanager;

/**
 * (no documentation provided)
 */
@javax.xml.bind.annotation.XmlType (
  name = "containerConfig",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "containerConfig",
  namespace = ""
)
public class ContainerConfig extends org.opendaylight.controller.configuration.ConfigurationObject {

  private java.lang.String _staticVlan;
  private java.lang.String _container;
  private java.util.List<java.lang.String> _ports;
  private java.util.List<org.opendaylight.controller.containermanager.ContainerFlowConfig> _containerFlows;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "staticVlan",
    namespace = ""
  )
  public java.lang.String getStaticVlan() {
    return this._staticVlan;
  }

  /**
   * (no documentation provided)
   */
  public void setStaticVlan(java.lang.String _staticVlan) {
    this._staticVlan = _staticVlan;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "container",
    namespace = ""
  )
  public java.lang.String getContainer() {
    return this._container;
  }

  /**
   * (no documentation provided)
   */
  public void setContainer(java.lang.String _container) {
    this._container = _container;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "nodeConnectors",
    namespace = ""
  )
  public java.util.List<java.lang.String> getPorts() {
    return this._ports;
  }

  /**
   * (no documentation provided)
   */
  public void setPorts(java.util.List<java.lang.String> _ports) {
    this._ports = _ports;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "flowSpecs",
    namespace = ""
  )
  public java.util.List<org.opendaylight.controller.containermanager.ContainerFlowConfig> getContainerFlows() {
    return this._containerFlows;
  }

  /**
   * (no documentation provided)
   */
  public void setContainerFlows(java.util.List<org.opendaylight.controller.containermanager.ContainerFlowConfig> _containerFlows) {
    this._containerFlows = _containerFlows;
  }

}