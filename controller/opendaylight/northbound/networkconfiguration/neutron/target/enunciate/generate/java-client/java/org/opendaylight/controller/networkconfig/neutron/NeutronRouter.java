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
  name = "neutronRouter",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "neutronRouter",
  namespace = ""
)
public class NeutronRouter extends org.opendaylight.controller.configuration.ConfigurationObject {

  private java.lang.String _tenantID;
  private org.opendaylight.controller.networkconfig.neutron.NeutronRouter_NetworkReference _externalGatewayInfo;
  private java.lang.Boolean _adminStateUp;
  private java.lang.String _status;
  private java.lang.String _routerUUID;
  private java.lang.String _name;

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
    name = "external_gateway_info",
    namespace = ""
  )
  public org.opendaylight.controller.networkconfig.neutron.NeutronRouter_NetworkReference getExternalGatewayInfo() {
    return this._externalGatewayInfo;
  }

  /**
   * (no documentation provided)
   */
  public void setExternalGatewayInfo(org.opendaylight.controller.networkconfig.neutron.NeutronRouter_NetworkReference _externalGatewayInfo) {
    this._externalGatewayInfo = _externalGatewayInfo;
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
  public java.lang.String getRouterUUID() {
    return this._routerUUID;
  }

  /**
   * (no documentation provided)
   */
  public void setRouterUUID(java.lang.String _routerUUID) {
    this._routerUUID = _routerUUID;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "name",
    namespace = ""
  )
  public java.lang.String getName() {
    return this._name;
  }

  /**
   * (no documentation provided)
   */
  public void setName(java.lang.String _name) {
    this._name = _name;
  }

}
