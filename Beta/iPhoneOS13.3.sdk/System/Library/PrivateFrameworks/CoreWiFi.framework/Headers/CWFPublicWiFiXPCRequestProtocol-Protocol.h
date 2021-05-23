/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

@protocol CWFPublicWiFiXPCRequestProtocol

- (unsigned short)startMonitoringEvent:XPCParams:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)stopMonitoringEvent:XPCParams:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)queryInterfaceNamesWithXPCParams:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)querySSIDWithXPCParams:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)querySSIDHashWithXPCParams:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)queryBSSIDWithXPCParams:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)queryBSSIDHashWithXPCParams:reply: /* Error: Ran out of types for this method. */;

@end
