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
namespace Org.Opendaylight.Controller.Flowprogrammer.Northbound {

  /// <remarks>
  ///  
  /// </remarks>
  /// <summary>
  ///  
  /// </summary>
  [System.SerializableAttribute()]
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="flowConfigs")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="flowConfigs")]
  [System.Xml.Serialization.XmlRootAttribute(Namespace="",ElementName="list")]
  public partial class FlowConfigs {

    private System.Collections.Generic.List<Org.Opendaylight.Controller.Forwardingrulesmanager.FlowConfig> _flowConfig;
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="flowConfig",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="flowConfig")]
    public System.Collections.Generic.List<Org.Opendaylight.Controller.Forwardingrulesmanager.FlowConfig> FlowConfig {
      get {
        return this._flowConfig;
      }
      set {
        this._flowConfig = value;
      }
    }
  }
}  
namespace Org.Opendaylight.Controller.Forwardingrulesmanager {

  /// <remarks>
  ///  
  /// </remarks>
  /// <summary>
  ///  
  /// </summary>
  [System.SerializableAttribute()]
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="flowConfig")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="flowConfig")]
  [System.Xml.Serialization.XmlRootAttribute(Namespace="",ElementName="flowConfig")]
  public partial class FlowConfig : Org.Opendaylight.Controller.Configuration.ConfigurationObject {

    private string _nwSrc;
    private string _installInHw;
    private string _idleTimeout;
    private string _vlanId;
    private string _etherType;
    private string _priority;
    private string _tosBits;
    private System.Collections.Generic.List<string> _actions;
    private string _dlDst;
    private string _dlSrc;
    private string _tpSrc;
    private string _hardTimeout;
    private string _protocol;
    private Org.Opendaylight.Controller.Sal.Core.Node _node;
    private string _cookie;
    private string _vlanPriority;
    private string _nwDst;
    private string _ingressPort;
    private string _tpDst;
    private string _name;
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="nwSrc",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="nwSrc")]
    public string NwSrc {
      get {
        return this._nwSrc;
      }
      set {
        this._nwSrc = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="installInHw",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="installInHw")]
    public string InstallInHw {
      get {
        return this._installInHw;
      }
      set {
        this._installInHw = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="idleTimeout",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="idleTimeout")]
    public string IdleTimeout {
      get {
        return this._idleTimeout;
      }
      set {
        this._idleTimeout = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="vlanId",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="vlanId")]
    public string VlanId {
      get {
        return this._vlanId;
      }
      set {
        this._vlanId = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="etherType",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="etherType")]
    public string EtherType {
      get {
        return this._etherType;
      }
      set {
        this._etherType = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="priority",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="priority")]
    public string Priority {
      get {
        return this._priority;
      }
      set {
        this._priority = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="tosBits",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="tosBits")]
    public string TosBits {
      get {
        return this._tosBits;
      }
      set {
        this._tosBits = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="actions",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="actions")]
    public System.Collections.Generic.List<string> Actions {
      get {
        return this._actions;
      }
      set {
        this._actions = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="dlDst",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="dlDst")]
    public string DlDst {
      get {
        return this._dlDst;
      }
      set {
        this._dlDst = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="dlSrc",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="dlSrc")]
    public string DlSrc {
      get {
        return this._dlSrc;
      }
      set {
        this._dlSrc = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="tpSrc",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="tpSrc")]
    public string TpSrc {
      get {
        return this._tpSrc;
      }
      set {
        this._tpSrc = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="hardTimeout",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="hardTimeout")]
    public string HardTimeout {
      get {
        return this._hardTimeout;
      }
      set {
        this._hardTimeout = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="protocol",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="protocol")]
    public string Protocol {
      get {
        return this._protocol;
      }
      set {
        this._protocol = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="node",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="node")]
    public Org.Opendaylight.Controller.Sal.Core.Node Node {
      get {
        return this._node;
      }
      set {
        this._node = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="cookie",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="cookie")]
    public string Cookie {
      get {
        return this._cookie;
      }
      set {
        this._cookie = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="vlanPriority",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="vlanPriority")]
    public string VlanPriority {
      get {
        return this._vlanPriority;
      }
      set {
        this._vlanPriority = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="nwDst",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="nwDst")]
    public string NwDst {
      get {
        return this._nwDst;
      }
      set {
        this._nwDst = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="ingressPort",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="ingressPort")]
    public string IngressPort {
      get {
        return this._ingressPort;
      }
      set {
        this._ingressPort = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="tpDst",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="tpDst")]
    public string TpDst {
      get {
        return this._tpDst;
      }
      set {
        this._tpDst = value;
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
  }
}  
namespace Org.Opendaylight.Controller.Sal.Core {

  /// <remarks>
  ///  
  /// </remarks>
  /// <summary>
  ///  
  /// </summary>
  [System.SerializableAttribute()]
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="node")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="node")]
  [System.Xml.Serialization.XmlRootAttribute(Namespace="",ElementName="node")]
  public partial class Node {

    private string _type;
    private string _nodeIDString;
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="type",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="type")]
    public string Type {
      get {
        return this._type;
      }
      set {
        this._type = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="id",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="id")]
    public string NodeIDString {
      get {
        return this._nodeIDString;
      }
      set {
        this._nodeIDString = value;
      }
    }
  }
}  
