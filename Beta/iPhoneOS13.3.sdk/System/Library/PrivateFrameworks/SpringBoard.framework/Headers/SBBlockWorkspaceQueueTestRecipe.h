/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBWorkspaceEventQueueLock, NSString, NSTimer;

@interface SBBlockWorkspaceQueueTestRecipe : NSObject

{
    NSTimer *_blockTimer;
    FBWorkspaceEventQueueLock *_queueLock;
}

@property (retain, nonatomic) NSTimer *blockTimer;
@property (retain, nonatomic) FBWorkspaceEventQueueLock *queueLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;

- (id)title;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (void)blockTimerDidFire:(id)arg1;

@end
