/**
 * 
 *
 * Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
 */
package org.opendaylight.controller.samples.loadbalancer.northbound;

/**
 * (no documentation provided)
 */
@javax.xml.bind.annotation.XmlType (
  name = "pools",
  namespace = ""
)
@javax.xml.bind.annotation.XmlRootElement (
  name = "pools",
  namespace = ""
)
public class Pools implements java.io.Serializable {

  private java.util.Collection<org.opendaylight.controller.samples.loadbalancer.entities.Pool> _loadBalancerPools;

  /**
   * (no documentation provided)
   */
  @javax.xml.bind.annotation.XmlElement (
    name = "pool",
    namespace = ""
  )
  public java.util.Collection<org.opendaylight.controller.samples.loadbalancer.entities.Pool> getLoadBalancerPools() {
    return this._loadBalancerPools;
  }

  /**
   * (no documentation provided)
   */
  public void setLoadBalancerPools(java.util.Collection<org.opendaylight.controller.samples.loadbalancer.entities.Pool> _loadBalancerPools) {
    this._loadBalancerPools = _loadBalancerPools;
  }

}
