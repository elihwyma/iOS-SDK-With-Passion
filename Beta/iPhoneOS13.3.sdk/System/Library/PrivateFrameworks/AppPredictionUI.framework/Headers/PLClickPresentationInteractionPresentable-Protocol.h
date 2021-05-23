/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <AppPredictionUI/Swift-Protocol.h>

@class UIView;

@protocol PLClickPresentationInteractionPresenting;

@protocol PLClickPresentationInteractionPresentable <Swift>

@property (weak, nonatomic) id <PLClickPresentationInteractionPresenting> presenter;
@property (nonatomic, readonly) UIView *viewWithContent;
@property (nonatomic, readonly) UIView *viewForTouchContinuation;

@end
