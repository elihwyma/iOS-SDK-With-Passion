/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKUpdateGroup, NSError, NSLock, NSMutableArray;

@interface GKUpdateGroupNotifier : NSObject

{
    GKUpdateGroup *_group;
    NSLock *_lock;
    NSMutableArray *_updateQueue;
    NSError *_error;
}

@property (retain) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *updateQueue;
@property (retain) NSError *error;

- (id)init;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (void)setGroup:(id)arg1;
- (id)group;
- (void)addUpdatesFromGroup:(id)arg1;
- (void)addUpdate:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)updateError:(id)arg1;

@end
