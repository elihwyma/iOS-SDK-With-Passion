/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSCountedSet, NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface PXVideoSessionManager : PXObservable

{
    NSMutableDictionary *_sessionsByIdentifier;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSCountedSet *_sessionCounts;
}

@property (nonatomic, readonly) NSArray *activeSessions;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)mutableChangeObject;
- (id)checkOutSessionWithContentProvider:(id)arg1;
- (void)checkInVideoSession:(id)arg1;
- (id)videoSessionForAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)videoSessionForAsset:(id)arg1 mediaProvider:(id)arg2 livePhotosLoopCrossfadeDuration:(double)arg3 loopTimeRange:(CDStruct_e83c9415)arg4;

@end
