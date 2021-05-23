/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class NSArray, NSString;

@interface CSShakableView : SBFTouchPassThroughView

{
    CDUnknownBlockType _shakeCompletionBlock;
    SBFTouchPassThroughView *_containerView;
    NSArray *_prototypeSpringAnimations;
    double _shakeDistance;
}

@property (nonatomic, readonly) SBFTouchPassThroughView *containerView;
@property (retain, nonatomic) NSArray *prototypeSpringAnimations;
@property (nonatomic) double shakeDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)beginShakingWithCompletion:(CDUnknownBlockType)arg1;
- (id)_defaultSpringAnimations;
- (void)_invokeCompletionBlockIfNecessary;

@end
