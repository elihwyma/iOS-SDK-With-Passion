/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

#import <AVKit/Swift-Protocol.h>

@class AVNewsWidgetPlayerBehaviorContext, NSString;

@interface AVNewsWidgetPlayerBehavior : NSObject <Swift>

{
    AVNewsWidgetPlayerBehaviorContext *_behaviorContext;
}

@property (weak, nonatomic) AVNewsWidgetPlayerBehaviorContext *behaviorContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)behaviorContextClass;

- (id)init;
- (void)dealloc;
- (void)willMoveToContext:(id)arg1;
- (void)didMoveToContext:(id)arg1;
- (void)willRemoveFromContext:(id)arg1;
- (void)didRemoveFromContext:(id)arg1;
- (id)playerForContentTransitionType:(long long)arg1;
- (void)willBeginContentTransition;
- (void)didUpdateContentTransitionProgress:(double)arg1;
- (void)willCompleteContentTransition;
- (void)didCompleteContentTransition;
- (void)willCancelContentTransition;
- (void)didCancelContentTransition;

@end
