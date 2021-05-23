/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NTKFace, NTKFaceSnapshottingWindow;

@protocol OS_dispatch_queue;

@interface NTKCompanionFaceRenderer : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    NTKFaceSnapshottingWindow *_window;
    _Bool _queueActive;
    NSMutableArray *_pendingTaskList;
    NTKFace *_currentFace;
    CDUnknownBlockType _faceBatchCompletionHandler;
}

@property (retain, nonatomic) NSMutableArray *pendingTaskList;
@property (nonatomic, getter=isQueueActive) _Bool queueActive;
@property (retain, nonatomic) NTKFace *currentFace;
@property (copy, nonatomic) CDUnknownBlockType faceBatchCompletionHandler;

+ (id)_storagePath;
+ (id)snapshotPathForFace:(id)arg1 detailMode:(long long)arg2;
+ (id)_snapshotNameForFace:(id)arg1 detailMode:(long long)arg2;

- (id)init;
- (void)_startNextWorkItem;
- (void)_notifyFinishedFaceBatchIfNeeded;
- (void)requestSnapshotOfFace:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
