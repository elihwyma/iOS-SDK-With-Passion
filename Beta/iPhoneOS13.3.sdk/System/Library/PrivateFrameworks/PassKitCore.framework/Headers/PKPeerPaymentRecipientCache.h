/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSTimer, PKMapContainer;

@protocol OS_dispatch_queue;

@interface PKPeerPaymentRecipientCache : NSObject

{
    NSObject<OS_dispatch_queue> *_mapAccessQueue;
    PKMapContainer *_mapContainer;
    NSTimer *_mapNeedsWriteTimer;
}

+ (id)sharedCache;
+ (id)_instanceName;

- (id)init;
- (void)dealloc;
- (_Bool)purgeCache;
- (id)__init;
- (void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)arg1;
- (_Bool)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)arg1;
- (id)recipientForRecipientAddress:(id)arg1;
- (void)cacheRecipient:(id)arg1 forRecipientAddress:(id)arg2;
- (void)purgeRecipientWithRecipientAddress:(id)arg1;
- (void)_updateMapsFromDisk;
- (void)_handlePurgedNotification:(id)arg1;
- (void)_handleDiskMapChangedNotification:(id)arg1;
- (id)_keyForRecipientAddress:(id)arg1;
- (void)_setMapNeedsWrite;
- (_Bool)_writeMapToDisk;
- (_Bool)_canReadMap;
- (_Bool)_canWriteMap;

@end
