/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.networkconfig.neutron.northbound;

/**
 * (no documentation provided)
 */
@javax.xml.bind.annotation.XmlType (
  name = "neutronPortRequest",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "neutronPortRequest",
  namespace = ""
)
public class NeutronPortRequest implements java.io.Serializable {

  private org.opendaylight.controller.networkconfig.neutron.NeutronPort _singletonPort;
  private java.util.List<org.opendaylight.controller.networkconfig.neutron.NeutronPort> _bulkRequest;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "port",
    namespace = ""
  )
  public org.opendaylight.controller.networkconfig.neutron.NeutronPort getSingletonPort() {
    return this._singletonPort;
  }

  /**
   * (no documentation provided)
   */
  public void setSingletonPort(org.opendaylight.controller.networkconfig.neutron.NeutronPort _singletonPort) {
    this._singletonPort = _singletonPort;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "ports",
    namespace = ""
  )
  public java.util.List<org.opendaylight.controller.networkconfig.neutron.NeutronPort> getBulkRequest() {
    return this._bulkRequest;
  }

  /**
   * (no documentation provided)
   */
  public void setBulkRequest(java.util.List<org.opendaylight.controller.networkconfig.neutron.NeutronPort> _bulkRequest) {
    this._bulkRequest = _bulkRequest;
  }

}