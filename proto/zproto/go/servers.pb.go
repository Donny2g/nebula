// Code generated by protoc-gen-go. DO NOT EDIT.
// source: servers.proto

package zproto

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// /////////////////////////////////////////////////////////////////////
// server_auth
// SERVER_AUTH_REQ
type ServerAuthReq struct {
	ServerId   uint32 `protobuf:"varint,1,opt,name=server_id,json=serverId" json:"server_id,omitempty"`
	ServerName string `protobuf:"bytes,2,opt,name=server_name,json=serverName" json:"server_name,omitempty"`
}

func (m *ServerAuthReq) Reset()                    { *m = ServerAuthReq{} }
func (m *ServerAuthReq) String() string            { return proto.CompactTextString(m) }
func (*ServerAuthReq) ProtoMessage()               {}
func (*ServerAuthReq) Descriptor() ([]byte, []int) { return fileDescriptor8, []int{0} }

func (m *ServerAuthReq) GetServerId() uint32 {
	if m != nil {
		return m.ServerId
	}
	return 0
}

func (m *ServerAuthReq) GetServerName() string {
	if m != nil {
		return m.ServerName
	}
	return ""
}

// SERVER_AUTH_RSP
type ServerAuthRsp struct {
}

func (m *ServerAuthRsp) Reset()                    { *m = ServerAuthRsp{} }
func (m *ServerAuthRsp) String() string            { return proto.CompactTextString(m) }
func (*ServerAuthRsp) ProtoMessage()               {}
func (*ServerAuthRsp) Descriptor() ([]byte, []int) { return fileDescriptor8, []int{1} }

func init() {
	proto.RegisterType((*ServerAuthReq)(nil), "zproto.ServerAuthReq")
	proto.RegisterType((*ServerAuthRsp)(nil), "zproto.ServerAuthRsp")
}

func init() { proto.RegisterFile("servers.proto", fileDescriptor8) }

var fileDescriptor8 = []byte{
	// 144 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0xe2, 0x2d, 0x4e, 0x2d, 0x2a,
	0x4b, 0x2d, 0x2a, 0xd6, 0x2b, 0x28, 0xca, 0x2f, 0xc9, 0x17, 0x62, 0xab, 0x02, 0xd3, 0x4a, 0xbe,
	0x5c, 0xbc, 0xc1, 0x60, 0x09, 0xc7, 0xd2, 0x92, 0x8c, 0xa0, 0xd4, 0x42, 0x21, 0x69, 0x2e, 0x4e,
	0x88, 0xca, 0xf8, 0xcc, 0x14, 0x09, 0x46, 0x05, 0x46, 0x0d, 0xde, 0x20, 0x0e, 0x88, 0x80, 0x67,
	0x8a, 0x90, 0x3c, 0x17, 0x37, 0x54, 0x32, 0x2f, 0x31, 0x37, 0x55, 0x82, 0x49, 0x81, 0x51, 0x83,
	0x33, 0x88, 0x0b, 0x22, 0xe4, 0x97, 0x98, 0x9b, 0xaa, 0xc4, 0x8f, 0x62, 0x5c, 0x71, 0x81, 0x93,
	0x32, 0x97, 0x78, 0x72, 0x7e, 0xae, 0x5e, 0x55, 0x72, 0x46, 0x62, 0x89, 0x5e, 0x6a, 0x5e, 0x7a,
	0x66, 0x5e, 0xaa, 0x1e, 0xc4, 0x6a, 0x27, 0xb6, 0xa8, 0x00, 0x10, 0xed, 0xc1, 0x94, 0xc4, 0x06,
	0x16, 0x30, 0x06, 0x04, 0x00, 0x00, 0xff, 0xff, 0x77, 0x05, 0x11, 0xa9, 0xa4, 0x00, 0x00, 0x00,
}
