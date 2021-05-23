/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFCameraClipPosition, HFUniqueArrayDiff, HMCameraClipManager, NSArray, NSDictionary;

@interface HFCameraClipPlayerQueueUpdate : NSObject

{
    _Bool _hasQueueChanges;
    _Bool _queueChangesRequireRebuild;
    HFCameraClipPosition *_targetPosition;
    NSArray *_initialQueuedItems;
    unsigned long long _queueLimit;
    NSArray *_updatedClipQueue;
    HMCameraClipManager *_clipManager;
    NSDictionary *_initialQueuedItemsByClipID;
    HFUniqueArrayDiff *_queueDiff;
    NSArray *_clips;
}

@property (nonatomic, readonly) HMCameraClipManager *clipManager;
@property (nonatomic, readonly) NSDictionary *initialQueuedItemsByClipID;
@property (retain, nonatomic) HFUniqueArrayDiff *queueDiff;
@property (retain, nonatomic) NSArray *updatedClipQueue;
@property (nonatomic) _Bool hasQueueChanges;
@property (nonatomic) _Bool queueChangesRequireRebuild;
@property (nonatomic, readonly) NSArray *clips;
@property (nonatomic, readonly) HFCameraClipPosition *targetPosition;
@property (nonatomic, readonly) NSArray *initialQueuedItems;
@property (nonatomic, readonly) unsigned long long queueLimit;

- (void)_computeQueueDiff;
- (id)_buildNewClipQueueForPosition:(id)arg1;
- (id)initWithClipManager:(id)arg1 targetPosition:(id)arg2 queuedItems:(id)arg3 queueLimit:(unsigned long long)arg4;
- (void)performUpdatesOnQueue:(id)arg1;

@end
