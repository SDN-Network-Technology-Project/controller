// <auto-generated>
// 
//
// Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
// </auto-generated>
using System;

namespace Org.Opendaylight.Controller.Configuration {

  /// <remarks>
  ///  
  /// </remarks>
  /// <summary>
  ///  
  /// </summary>
  [System.SerializableAttribute()]
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="configurationObject")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="configurationObject")]
  public abstract partial class ConfigurationObject {

  }
}  
namespace Org.Opendaylight.Controller.Subnets.Northbound {

  /// <remarks>
  ///  
  /// </remarks>
  /// <summary>
  ///  
  /// </summary>
  [System.SerializableAttribute()]
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="subnetConfigs")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="subnetConfigs")]
  [System.Xml.Serialization.XmlRootAttribute(Namespace="",ElementName="list")]
  public partial class SubnetConfigs {

    private System.Collections.Generic.List<Org.Opendaylight.Controller.Switchmanager.SubnetConfig> _subnetConfig;
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="subnetConfig",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="subnetConfig")]
    public System.Collections.Generic.List<Org.Opendaylight.Controller.Switchmanager.SubnetConfig> SubnetConfig {
      get {
        return this._subnetConfig;
      }
      set {
        this._subnetConfig = value;
      }
    }
  }
}  
namespace Org.Opendaylight.Controller.Switchmanager {

  /// <remarks>
  ///  
  /// </remarks>
  /// <summary>
  ///  
  /// </summary>
  [System.SerializableAttribute()]
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="subnetConfig")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="subnetConfig")]
  [System.Xml.Serialization.XmlRootAttribute(Namespace="",ElementName="subnetConfig")]
  public partial class SubnetConfig : Org.Opendaylight.Controller.Configuration.ConfigurationObject {

    private string _subnet;
    private string _name;
    private System.Collections.Generic.List<string> _nodeConnectors;
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="subnet",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="subnet")]
    public string Subnet {
      get {
        return this._subnet;
      }
      set {
        this._subnet = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="name",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="name")]
    public string Name {
      get {
        return this._name;
      }
      set {
        this._name = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="nodeConnectors",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="nodeConnectors")]
    public System.Collections.Generic.List<string> NodeConnectors {
      get {
        return this._nodeConnectors;
      }
      set {
        this._nodeConnectors = value;
      }
    }
  }
}  
