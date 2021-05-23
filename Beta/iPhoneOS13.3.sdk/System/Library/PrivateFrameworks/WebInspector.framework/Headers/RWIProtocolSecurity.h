/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolSecurityCertificate, RWIProtocolSecurityConnection;

@interface RWIProtocolSecurity : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolSecurityConnection *connection;
@property (retain, nonatomic) RWIProtocolSecurityCertificate *certificate;

@end
