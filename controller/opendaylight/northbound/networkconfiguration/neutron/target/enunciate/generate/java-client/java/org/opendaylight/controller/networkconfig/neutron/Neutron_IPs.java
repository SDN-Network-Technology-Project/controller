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
  name = "neutron_IPs",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "neutron_IPs",
  namespace = ""
)
public class Neutron_IPs extends org.opendaylight.controller.configuration.ConfigurationObject {

  private java.lang.String _subnetUUID;
  private java.lang.String _ipAddress;

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

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "ip_address",
    namespace = ""
  )
  public java.lang.String getIpAddress() {
    return this._ipAddress;
  }

  /**
   * (no documentation provided)
   */
  public void setIpAddress(java.lang.String _ipAddress) {
    this._ipAddress = _ipAddress;
  }

}
