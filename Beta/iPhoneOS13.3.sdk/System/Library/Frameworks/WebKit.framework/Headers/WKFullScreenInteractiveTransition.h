/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, WKFullscreenAnimationController;

__attribute__((visibility("hidden")))
@interface WKFullScreenInteractiveTransition : NSObject

{
    struct RetainPtr<WKFullscreenAnimationController> _animator;
    struct RetainPtr<id<UIViewControllerContextTransitioning>> _context;
    struct CGPoint _anchor;
}

@property (nonatomic, readonly) WKFullscreenAnimationController *animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;

- (id).cxx_construct;
- (void)startInteractiveTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)initWithAnimator:(id)arg1 anchor:(struct CGPoint)arg2;
- (void)updateInteractiveTransition:(double)arg1 withTranslation:(struct CGSize)arg2;
- (void)updateInteractiveTransition:(double)arg1 withScale:(double)arg2 andTranslation:(struct CGSize)arg3;

@end
