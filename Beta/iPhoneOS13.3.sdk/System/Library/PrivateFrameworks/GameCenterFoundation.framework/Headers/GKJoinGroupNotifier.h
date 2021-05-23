/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKJoinGroup, NSError, NSLock, NSMutableArray;

@interface GKJoinGroupNotifier : NSObject

{
    GKJoinGroup *_group;
    NSLock *_lock;
    NSMutableArray *_updateQueue;
    NSError *_error;
}

@property (nonatomic) GKJoinGroup *group;
@property (retain) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *updateQueue;
@property (retain) NSError *error;

- (id)init;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (void)setResult:(CDUnknownBlockType)arg1 error:(id)arg2;

@end
