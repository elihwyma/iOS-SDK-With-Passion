/*
 Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

@protocol iAUPServerDelegate

- (unsigned short)writeData: /* Error: Ran out of types for this method. */;
- (unsigned short)updateProgress: /* Error: Ran out of types for this method. */;
- (unsigned short)handleSessionError:message: /* Error: Ran out of types for this method. */;
- (unsigned short)logStatusString: /* Error: Ran out of types for this method. */;
- (unsigned short)handleFirmwareUpdateStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)firmwareUpdateComplete:error: /* Error: Ran out of types for this method. */;
- (unsigned short)processPersonalizationInfoFromAccessory: /* Error: Ran out of types for this method. */;
- (unsigned short)updateRequiresPersonalization;
- (unsigned short)getPersonalizationID;
- (unsigned short)getDeviceClassName;
- (unsigned short)getWhitelistedPersonalizationFields;

@end
