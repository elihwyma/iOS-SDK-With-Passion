/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, NSHashTable, NSMutableDictionary, NSNotificationCenter, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue;

@interface HMCameraClipManager : NSObject

{
    HMFUnfairLock *_lock;
    _HMContext *_context;
    NSUUID *_profileUniqueIdentifier;
    NSNotificationCenter *_notificationCenter;
    NSMutableDictionary *_clipsByFetchUUID;
    NSMutableDictionary *_videoAssetContextsByClipUUID;
    NSHashTable *_observers;
}

@property (readonly) HMFUnfairLock *lock;
@property (readonly) _HMContext *context;
@property (copy, readonly) NSUUID *profileUniqueIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSMutableDictionary *clipsByFetchUUID;
@property (readonly) NSMutableDictionary *videoAssetContextsByClipUUID;
@property (readonly) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)configure;
- (id)logIdentifier;
- (void)unsubscribe;
- (void)fetchPosterFramesAssetContextForClip:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchVideoSegmentsAssetContextForClip:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 profileUniqueIdentifier:(id)arg2;
- (void)deleteAllClipsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 profileUniqueIdentifier:(id)arg2 notificationCenter:(id)arg3;
- (void)subscribe;
- (id)clipForResponsePayload:(id)arg1;
- (id)finishFetchingClipsForFetchUUID:(id)arg1;
- (void)prepareToFetchClipsForFetchUUID:(id)arg1;
- (void)handleDidChangeClipsMessage:(id)arg1;
- (void)handleDidFetchClipsMessage:(id)arg1;
- (void)handleDaemonReconnectedNotification:(id)arg1;
- (id)assetContextForResponsePayload:(id)arg1;
- (id)videoSegmentsAssetContextForClip:(id)arg1;
- (id)clipsForMessage:(id)arg1 withKey:(id)arg2;
- (void)updateVideoSegmentsAssetContextForClip:(id)arg1;
- (id)orderedClipsForMessage:(id)arg1 withKey:(id)arg2;
- (void)handleFetchedClips:(id)arg1 forFetchUUID:(id)arg2;
- (void)fetchClipWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllClipsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchClipForSignificantEventWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchClipsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchClipsBeforeDate:(id)arg1 withLimit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchClipsAfterDate:(id)arg1 withLimit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchCountOfAllClipsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchCountOfClipsWithDateInterval:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCountOfClipsBeforeDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCountOfClipsAfterDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteClipWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)importClipsWithImportData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
