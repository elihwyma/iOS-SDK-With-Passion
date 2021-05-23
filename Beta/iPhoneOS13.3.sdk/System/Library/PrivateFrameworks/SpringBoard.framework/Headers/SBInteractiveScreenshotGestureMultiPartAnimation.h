/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SBInteractiveScreenshotGestureMultiPartAnimation : NSObject

{
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_pendingAnimationIdentifiers;
}

- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginAnimationWithIdentifier:(id)arg1;
- (void)completeAnimationWithIdentifier:(id)arg1 finished:(_Bool)arg2 retargeted:(_Bool)arg3;

@end
