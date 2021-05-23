/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSError, NSLock, NSMutableArray, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface GKJoinGroup : NSObject

{
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSMutableArray *_leftNotifiers;
    NSMutableArray *_rightNotifiers;
    NSMutableArray *_leftResults;
    NSMutableArray *_rightResults;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSLock *_lock;
    NSError *_error;
    NSString *_name;
}

@property (retain) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *leftNotifiers;
@property (retain, nonatomic) NSMutableArray *rightNotifiers;
@property (retain) NSMutableArray *leftResults;
@property (retain) NSMutableArray *rightResults;
@property (retain) NSError *error;
@property (retain, nonatomic) NSString *name;

+ (id)joinGroup;
+ (id)joinGroupWithName:(id)arg1;
+ (id)joinGroupForTargetQueue:(id)arg1;
+ (id)joinGroupWithName:(id)arg1 taregetQueue:(id)arg2;

- (void)dealloc;
- (void)wait;
- (void)join:(CDUnknownBlockType)arg1;
- (void)applyUpdates;
- (void)_join:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;
- (void)performLeftOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)performRightOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)aggregateJoin:(CDUnknownBlockType)arg1;
- (void)aggregateJoinLeft:(CDUnknownBlockType)arg1;
- (void)aggregateJoinRight:(CDUnknownBlockType)arg1;
- (void)performLeft:(CDUnknownBlockType)arg1;
- (void)performRight:(CDUnknownBlockType)arg1;
- (void)joinLeft:(CDUnknownBlockType)arg1;
- (void)joinRight:(CDUnknownBlockType)arg1;

@end
