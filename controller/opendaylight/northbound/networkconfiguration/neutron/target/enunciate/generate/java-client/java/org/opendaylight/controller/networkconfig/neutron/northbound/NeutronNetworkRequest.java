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
  name = "neutronNetworkRequest",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "neutronNetworkRequest",
  namespace = ""
)
public class NeutronNetworkRequest implements java.io.Serializable {

  private org.opendaylight.controller.networkconfig.neutron.NeutronNetwork _singletonNetwork;
  private java.util.List<org.opendaylight.controller.networkconfig.neutron.NeutronNetwork> _bulkRequest;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "network",
    namespace = ""
  )
  public org.opendaylight.controller.networkconfig.neutron.NeutronNetwork getSingletonNetwork() {
    return this._singletonNetwork;
  }

  /**
   * (no documentation provided)
   */
  public void setSingletonNetwork(org.opendaylight.controller.networkconfig.neutron.NeutronNetwork _singletonNetwork) {
    this._singletonNetwork = _singletonNetwork;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "networks",
    namespace = ""
  )
  public java.util.List<org.opendaylight.controller.networkconfig.neutron.NeutronNetwork> getBulkRequest() {
    return this._bulkRequest;
  }

  /**
   * (no documentation provided)
   */
  public void setBulkRequest(java.util.List<org.opendaylight.controller.networkconfig.neutron.NeutronNetwork> _bulkRequest) {
    this._bulkRequest = _bulkRequest;
  }

}
