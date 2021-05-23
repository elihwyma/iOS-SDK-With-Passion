/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString, TSDTileStorage, TSKAccessController;

@protocol NSObject, OS_dispatch_queue;

@interface TSDTileProvider : NSObject <Swift>

{
    id <NSObject> mTarget;
    TSDTileStorage *mTileStorage;
    TSKAccessController *mAccessController;
    NSObject<OS_dispatch_queue> *mQueue;
    CDStruct_2d1207dd mVisibleTileRect;
}

@property CDStruct_2d1207dd visibleTileRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)flush;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)removeStoredImages;
- (id)contentsInRect:(struct CGRect)arg1 contentsScale:(double)arg2 forTile:(id)arg3 atLocation:(CDStruct_73b5d383)arg4 takingReadLock:(_Bool)arg5;
- (id)p_bucketKey;
- (_Bool)isTargetOpaque;
- (void)drawTargetInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (id)initWithTarget:(id)arg1 queue:(id)arg2 storage:(id)arg3 accessController:(id)arg4;
- (void)provideContentsInRect:(struct CGRect)arg1 contentsScale:(double)arg2 forTile:(id)arg3 atLocation:(CDStruct_73b5d383)arg4 inGroup:(id)arg5 limitedBySemaphore:(id)arg6 takingReadLock:(_Bool)arg7 startBlock:(CDUnknownBlockType)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (_Bool)canTargetDrawInParallel;

@end
