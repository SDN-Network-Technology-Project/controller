// <auto-generated>
// 
//
// Generated by <a href="http://enunciate.codehaus.org">Enunciate</a>.
// </auto-generated>
using System;

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

    private string _nodeIDString;
    private string _type;
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
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="nodeConnector")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="nodeConnector")]
  [System.Xml.Serialization.XmlRootAttribute(Namespace="",ElementName="nodeConnector")]
  public partial class NodeConnector {

    private string _nodeConnectorIDString;
    private string _type;
    private Org.Opendaylight.Controller.Sal.Core.Node _nodeConnectorNode;
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="id",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="id")]
    public string NodeConnectorIDString {
      get {
        return this._nodeConnectorIDString;
      }
      set {
        this._nodeConnectorIDString = value;
      }
    }
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
    [System.Xml.Serialization.XmlElementAttribute(ElementName="node",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="node")]
    public Org.Opendaylight.Controller.Sal.Core.Node NodeConnectorNode {
      get {
        return this._nodeConnectorNode;
      }
      set {
        this._nodeConnectorNode = value;
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
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="property")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="property")]
  [System.Xml.Serialization.XmlRootAttribute(Namespace="",ElementName="property")]
  public abstract partial class Property {

  }
}  
namespace Org.Opendaylight.Controller.Switchmanager.Northbound {

  /// <remarks>
  ///  The class describes set of properties attached to a node connector
  /// </remarks>
  /// <summary>
  ///  The class describes set of properties attached to a node connector
  /// </summary>
  [System.SerializableAttribute()]
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="nodeConnectorProperties")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="nodeConnectorProperties")]
  [System.Xml.Serialization.XmlRootAttribute(Namespace="",ElementName="nodeConnectorProperties")]
  public partial class NodeConnectorProperties {

    private Org.Opendaylight.Controller.Sal.Core.NodeConnector _nodeconnector;
    private System.Collections.Generic.List<Org.Opendaylight.Controller.Sal.Core.Property> _properties;
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="nodeconnector",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="nodeconnector")]
    public Org.Opendaylight.Controller.Sal.Core.NodeConnector Nodeconnector {
      get {
        return this._nodeconnector;
      }
      set {
        this._nodeconnector = value;
      }
    }
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlArrayAttribute(ElementName="properties",Namespace="")]
    [System.Xml.Serialization.XmlArrayItemAttribute(typeof(System.Collections.Generic.List<Org.Opendaylight.Controller.Sal.Core.Property>),ElementName="property",Namespace="")]
    public System.Collections.Generic.List<Org.Opendaylight.Controller.Sal.Core.Property> Properties {
      get {
        return this._properties;
      }
      set {
        this._properties = value;
      }
    }
  }
}  
namespace Org.Opendaylight.Controller.Switchmanager.Northbound {

  /// <remarks>
  ///  
  /// </remarks>
  /// <summary>
  ///  
  /// </summary>
  [System.SerializableAttribute()]
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="nodeConnectors")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="nodeConnectors")]
  [System.Xml.Serialization.XmlRootAttribute(Namespace="",ElementName="list")]
  public partial class NodeConnectors {

    private System.Collections.Generic.List<Org.Opendaylight.Controller.Switchmanager.Northbound.NodeConnectorProperties> _nodeConnectorProperties;
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="nodeConnectorProperties",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="nodeConnectorProperties")]
    public System.Collections.Generic.List<Org.Opendaylight.Controller.Switchmanager.Northbound.NodeConnectorProperties> NodeConnectorProperties {
      get {
        return this._nodeConnectorProperties;
      }
      set {
        this._nodeConnectorProperties = value;
      }
    }
  }
}  
namespace Org.Opendaylight.Controller.Switchmanager.Northbound {

  /// <remarks>
  ///  The class describes set of properties attached to a node
  /// </remarks>
  /// <summary>
  ///  The class describes set of properties attached to a node
  /// </summary>
  [System.SerializableAttribute()]
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="nodeProperties")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="nodeProperties")]
  [System.Xml.Serialization.XmlRootAttribute(Namespace="",ElementName="nodeProperties")]
  public partial class NodeProperties {

    private Org.Opendaylight.Controller.Sal.Core.Node _node;
    private System.Collections.Generic.List<Org.Opendaylight.Controller.Sal.Core.Property> _properties;
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
    [System.Xml.Serialization.XmlArrayAttribute(ElementName="properties",Namespace="")]
    [System.Xml.Serialization.XmlArrayItemAttribute(typeof(System.Collections.Generic.List<Org.Opendaylight.Controller.Sal.Core.Property>),ElementName="property",Namespace="")]
    public System.Collections.Generic.List<Org.Opendaylight.Controller.Sal.Core.Property> Properties {
      get {
        return this._properties;
      }
      set {
        this._properties = value;
      }
    }
  }
}  
namespace Org.Opendaylight.Controller.Switchmanager.Northbound {

  /// <remarks>
  ///  
  /// </remarks>
  /// <summary>
  ///  
  /// </summary>
  [System.SerializableAttribute()]
  [System.Xml.Serialization.XmlTypeAttribute(Namespace="",TypeName="nodes")]
  [System.Xml.Serialization.SoapTypeAttribute(TypeName="nodes")]
  [System.Xml.Serialization.XmlRootAttribute(Namespace="",ElementName="list")]
  public partial class Nodes {

    private System.Collections.Generic.List<Org.Opendaylight.Controller.Switchmanager.Northbound.NodeProperties> _nodeProperties;
    /// <summary>
    ///  (no documentation provided)
    /// </summary>
    [System.Xml.Serialization.XmlElementAttribute(ElementName="nodeProperties",Namespace="")]
    [System.Xml.Serialization.SoapElementAttribute(ElementName="nodeProperties")]
    public System.Collections.Generic.List<Org.Opendaylight.Controller.Switchmanager.Northbound.NodeProperties> NodeProperties {
      get {
        return this._nodeProperties;
      }
      set {
        this._nodeProperties = value;
      }
    }
  }
}  
