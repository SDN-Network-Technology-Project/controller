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
  name = "neutronRouter_Interface",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "neutronRouter_Interface",
  namespace = ""
)
public class NeutronRouter_Interface implements java.io.Serializable {

  private java.lang.String _id;
  private java.lang.String _tenantID;
  private java.lang.String _portUUID;
  private java.lang.String _subnetUUID;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "id",
    namespace = ""
  )
  public java.lang.String getId() {
    return this._id;
  }

  /**
   * (no documentation provided)
   */
  public void setId(java.lang.String _id) {
    this._id = _id;
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
    name = "subnet_id",
    namespace = ""
  )
  public java.lang.String getSubnetUUID() {
    return this._subnetUUID;
  }

  /**
   * (no documentation provided)
   */
  public void setSubnetUUID(java.lang.String _subnetUUID) {
    this._subnetUUID = _subnetUUID;
  }

}
