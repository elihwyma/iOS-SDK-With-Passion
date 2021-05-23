/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <PlatterKit/Swift-Protocol.h>

@class UIView;

@protocol PLClickPresentationInteractionPresenting;

@protocol PLClickPresentationInteractionPresentable <Swift>

@property (weak, nonatomic) id <PLClickPresentationInteractionPresenting> presenter;
@property (nonatomic, readonly) UIView *viewWithContent;
@property (nonatomic, readonly) UIView *viewForTouchContinuation;

@end
