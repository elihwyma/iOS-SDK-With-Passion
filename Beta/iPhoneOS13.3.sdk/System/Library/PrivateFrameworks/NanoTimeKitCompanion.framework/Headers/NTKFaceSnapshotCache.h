/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface NTKFaceSnapshotCache : NSObject

{
    NSMutableDictionary *_snapshots;
    NSMapTable *_callbacks;
    NSMapTable *_faceQOS;
    NSMapTable *_callCount;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *snapshots;
@property (nonatomic, readonly) NSMapTable *callbacks;
@property (nonatomic, readonly) NSMapTable *faceQOS;
@property (nonatomic, readonly) NSMapTable *callCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *snapshotQueue;

+ (id)snapshotCache;

- (id)init;
- (void)dealloc;
- (void)_snapshotProcessInterrupted:(id)arg1;
- (void)_attemptSnapshotOfFace:(id)arg1;
- (void)_invokeCallbacksOfFace:(id)arg1 withSnapshot:(id)arg2;
- (id)cachedSnapshotOfFace:(id)arg1;
- (void)fetchSnapshotOfFace:(id)arg1 atQOS:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;

@end
