/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@protocol CTXPCServiceDataInterface

- (unsigned short)setPacketContextActiveByServiceType:connectionType:active:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getConnectionAvailability:connectionType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getActiveConnections:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getConnectionState:connectionType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getDataStatus:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getNATTKeepAliveOverCell:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAPNSettings: /* Error: Ran out of types for this method. */;
- (unsigned short)setInternationalDataAccessStatus:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getInternationalDataAccessStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)setSupportDynamicDataSimSwitch:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setSupportDynamicDataSimSwitch:forIccid:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getSupportDynamicDataSimSwitch: /* Error: Ran out of types for this method. */;
- (unsigned short)getPacketContextCount: /* Error: Ran out of types for this method. */;
- (unsigned short)isTetheringEditingSupported:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getCurrentDataSubscriptionContext: /* Error: Ran out of types for this method. */;
- (unsigned short)getCurrentDataServiceDescriptor: /* Error: Ran out of types for this method. */;
- (unsigned short)getPreferredDataSubscriptionContext: /* Error: Ran out of types for this method. */;
- (unsigned short)getPreferredDataServiceDescriptor: /* Error: Ran out of types for this method. */;

@end
