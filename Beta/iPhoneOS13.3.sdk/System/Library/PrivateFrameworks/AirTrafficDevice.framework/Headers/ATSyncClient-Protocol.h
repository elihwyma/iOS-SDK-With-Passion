/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <AirTrafficDevice/Swift-Protocol.h>

@protocol ATSyncClient <Swift>

- (unsigned short)setDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)isEnabled;
- (unsigned short)currentRevision;
- (unsigned short)revisionVersionToken;
- (unsigned short)syncDataClass;
- (unsigned short)getChangesForSyncType:endpointType:afterRevision:upToRevision:withSyncParams:intoOutputStream:withStartHandler:withProgressHandler:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)applyChangesForSyncType:endpointType:fromStream:withSyncParams:withProgressHandler:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resetSyncDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)syncCompletedWithError: /* Error: Ran out of types for this method. */;

@end
