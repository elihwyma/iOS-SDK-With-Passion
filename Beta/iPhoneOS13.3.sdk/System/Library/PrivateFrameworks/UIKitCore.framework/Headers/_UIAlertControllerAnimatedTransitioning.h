/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIAlertController, UIInteractionProgress;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerAnimatedTransitioning : NSObject <Swift>

{
    _Bool _presentation;
    UIAlertController *_alertController;
    UIInteractionProgress *_interactionProgress;
}

@property (getter=isPresentation) _Bool presentation;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) UIInteractionProgress *interactionProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_alertControllerForContext:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)_animateTransition:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)animateTransition:(id)arg1;
- (id)initWithInteractionProgress:(id)arg1;

@end
