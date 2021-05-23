/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@protocol CTXPCServiceCapabilitiesInterface

- (unsigned short)context:canSetCapability:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)context:getCapability:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)context:setCapability:enabled:info:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)context:getSystemCapabilities: /* Error: Ran out of types for this method. */;
- (unsigned short)context:recheckPhoneServicesAccountStatus:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPhoneServicesDeviceList: /* Error: Ran out of types for this method. */;
- (unsigned short)getPhoneServicesDeviceInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)context:addPhoneServicesDevice:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)context:removePhoneServicesDevice:withCompletion: /* Error: Ran out of types for this method. */;

@end
