/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface _UIProgressiveBlurPresentationAnimator : NSObject <Swift>

{
    _Bool _presenting;
}

@property (nonatomic, readonly, getter=isPresenting) _Bool presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)alphaAnimationFactory;
+ (id)transformAnimationFactory;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initForPresenting:(_Bool)arg1;

@end
