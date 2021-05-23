/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/Swift-Protocol.h>

@class NAFuture;

@protocol HMBLocalZoneID;

@protocol HMBMirrorProtocol <Swift>

@property (nonatomic, readonly) id <HMBLocalZoneID> zoneID;
@property (nonatomic, readonly) NAFuture *startUp;

- (unsigned short)destroy;
- (unsigned short)flush;
- (unsigned short)shutdown;
- (unsigned short)triggerOutputForOutputRow:options: /* Error: Ran out of types for this method. */;
- (unsigned short)startUpWithLocalZone: /* Error: Ran out of types for this method. */;

@end
