/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface PHAssetCreationRequestPlaceholderSupportNotificationManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_assetAvailabilityHandlers;
}

+ (id)sharedManager;

- (id)init;
- (void)_onQueueSync:(CDUnknownBlockType)arg1;
- (void)callCompletionHandlerForAssetUUID:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)assetAvailableNotification:(id)arg1;
- (void)registerAssetAvailabilityHandler:(CDUnknownBlockType)arg1 forAssetUUID:(id)arg2;
- (void)unregisterAssetAvailabilityHandlerForAssetUUID:(id)arg1;

@end
