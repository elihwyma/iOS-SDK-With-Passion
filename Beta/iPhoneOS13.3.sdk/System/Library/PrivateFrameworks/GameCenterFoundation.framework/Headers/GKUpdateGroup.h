/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSError, NSLock, NSMutableArray, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface GKUpdateGroup : NSObject

{
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSMutableArray *_notifiers;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSLock *_lock;
    NSError *_error;
    NSString *_name;
}

@property (retain) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *notifiers;
@property (retain) NSError *error;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) long long updateCount;

+ (id)updateGroup;
+ (id)updateGroupWithName:(id)arg1;
+ (id)updateGroupForTargetQueue:(id)arg1;
+ (id)updateGroupWithName:(id)arg1 taregetQueue:(id)arg2;

- (void)dealloc;
- (void)wait;
- (void)perform:(CDUnknownBlockType)arg1;
- (void)join:(CDUnknownBlockType)arg1;
- (void)applyUpdates;
- (void)performOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;
- (void)joinApplyUpdatesAndDo:(CDUnknownBlockType)arg1;
- (void)joinAndApplyUpdates;
- (void)cancelUpdates;

@end
