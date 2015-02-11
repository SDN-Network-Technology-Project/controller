/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.networkconfig.neutron;

/**
 * (no documentation provided)
 */
@javax.xml.bind.annotation.XmlType (
  name = "neutronNetwork",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "network",
  namespace = ""
)
public class NeutronNetwork extends org.opendaylight.controller.configuration.ConfigurationObject {

  private java.lang.String _providerSegmentationID;
  private java.lang.String _tenantID;
  private java.lang.String _networkName;
  private java.lang.Boolean _routerExternal;
  private java.lang.String _providerNetworkType;
  private java.lang.Boolean _shared;
  private java.lang.String _providerPhysicalNetwork;
  private java.lang.String _status;
  private java.lang.String _networkUUID;
  private java.lang.Boolean _adminStateUp;
  private java.util.List<java.lang.String> _subnets;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "segmentation_id",
    namespace = "provider"
  )
  public java.lang.String getProviderSegmentationID() {
    return this._providerSegmentationID;
  }

  /**
   * (no documentation provided)
   */
  public void setProviderSegmentationID(java.lang.String _providerSegmentationID) {
    this._providerSegmentationID = _providerSegmentationID;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "tenant_id",
    namespace = ""
  )
  public java.lang.String getTenantID() {
    return this._tenantID;
  }

  /**
   * (no documentation provided)
   */
  public void setTenantID(java.lang.String _tenantID) {
    this._tenantID = _tenantID;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "name",
    namespace = ""
  )
  public java.lang.String getNetworkName() {
    return this._networkName;
  }

  /**
   * (no documentation provided)
   */
  public void setNetworkName(java.lang.String _networkName) {
    this._networkName = _networkName;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "external",
    namespace = "router"
  )
  public java.lang.Boolean getRouterExternal() {
    return this._routerExternal;
  }

  /**
   * (no documentation provided)
   */
  public void setRouterExternal(java.lang.Boolean _routerExternal) {
    this._routerExternal = _routerExternal;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "network_type",
    namespace = "provider"
  )
  public java.lang.String getProviderNetworkType() {
    return this._providerNetworkType;
  }

  /**
   * (no documentation provided)
   */
  public void setProviderNetworkType(java.lang.String _providerNetworkType) {
    this._providerNetworkType = _providerNetworkType;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "shared",
    namespace = ""
  )
  public java.lang.Boolean getShared() {
    return this._shared;
  }

  /**
   * (no documentation provided)
   */
  public void setShared(java.lang.Boolean _shared) {
    this._shared = _shared;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "physical_network",
    namespace = "provider"
  )
  public java.lang.String getProviderPhysicalNetwork() {
    return this._providerPhysicalNetwork;
  }

  /**
   * (no documentation provided)
   */
  public void setProviderPhysicalNetwork(java.lang.String _providerPhysicalNetwork) {
    this._providerPhysicalNetwork = _providerPhysicalNetwork;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "status",
    namespace = ""
  )
  public java.lang.String getStatus() {
    return this._status;
  }

  /**
   * (no documentation provided)
   */
  public void setStatus(java.lang.String _status) {
    this._status = _status;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "id",
    namespace = ""
  )
  public java.lang.String getNetworkUUID() {
    return this._networkUUID;
  }

  /**
   * (no documentation provided)
   */
  public void setNetworkUUID(java.lang.String _networkUUID) {
    this._networkUUID = _networkUUID;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "admin_state_up",
    namespace = ""
  )
  public java.lang.Boolean getAdminStateUp() {
    return this._adminStateUp;
  }

  /**
   * (no documentation provided)
   */
  public void setAdminStateUp(java.lang.Boolean _adminStateUp) {
    this._adminStateUp = _adminStateUp;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "subnets",
    namespace = ""
  )
  public java.util.List<java.lang.String> getSubnets() {
    return this._subnets;
  }

  /**
   * (no documentation provided)
   */
  public void setSubnets(java.util.List<java.lang.String> _subnets) {
    this._subnets = _subnets;
  }

}