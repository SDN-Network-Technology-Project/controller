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
  name = "neutronFloatingIP",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "neutronFloatingIP",
  namespace = ""
)
public class NeutronFloatingIP extends org.opendaylight.controller.configuration.ConfigurationObject {

  private java.lang.String _floatingIPAddress;
  private java.lang.String _portUUID;
  private java.lang.String _tenantUUID;
  private java.lang.String _floatingNetworkUUID;
  private java.lang.String _floatingIPUUID;
  private java.lang.String _fixedIPAddress;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "floating_ip_address",
    namespace = ""
  )
  public java.lang.String getFloatingIPAddress() {
    return this._floatingIPAddress;
  }

  /**
   * (no documentation provided)
   */
  public void setFloatingIPAddress(java.lang.String _floatingIPAddress) {
    this._floatingIPAddress = _floatingIPAddress;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "port_id",
    namespace = ""
  )
  public java.lang.String getPortUUID() {
    return this._portUUID;
  }

  /**
   * (no documentation provided)
   */
  public void setPortUUID(java.lang.String _portUUID) {
    this._portUUID = _portUUID;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "tenant_id",
    namespace = ""
  )
  public java.lang.String getTenantUUID() {
    return this._tenantUUID;
  }

  /**
   * (no documentation provided)
   */
  public void setTenantUUID(java.lang.String _tenantUUID) {
    this._tenantUUID = _tenantUUID;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "floating_network_id",
    namespace = ""
  )
  public java.lang.String getFloatingNetworkUUID() {
    return this._floatingNetworkUUID;
  }

  /**
   * (no documentation provided)
   */
  public void setFloatingNetworkUUID(java.lang.String _floatingNetworkUUID) {
    this._floatingNetworkUUID = _floatingNetworkUUID;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "id",
    namespace = ""
  )
  public java.lang.String getFloatingIPUUID() {
    return this._floatingIPUUID;
  }

  /**
   * (no documentation provided)
   */
  public void setFloatingIPUUID(java.lang.String _floatingIPUUID) {
    this._floatingIPUUID = _floatingIPUUID;
  }

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "fixed_ip_address",
    namespace = ""
  )
  public java.lang.String getFixedIPAddress() {
    return this._fixedIPAddress;
  }

  /**
   * (no documentation provided)
   */
  public void setFixedIPAddress(java.lang.String _fixedIPAddress) {
    this._fixedIPAddress = _fixedIPAddress;
  }

}