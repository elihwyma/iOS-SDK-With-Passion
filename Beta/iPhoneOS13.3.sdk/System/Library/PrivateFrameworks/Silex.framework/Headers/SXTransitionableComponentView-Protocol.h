/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class UIView;

@protocol SXTransitionableComponentView <Swift>

@property (nonatomic, readonly) UIView *transitionContainerView;
@property (nonatomic, readonly) UIView *transitionContentView;
@property (nonatomic, readonly) _Bool transitionViewIsVisible;
@property (nonatomic, readonly) _Bool transitionViewShouldFadeInContent;
@property (nonatomic, readonly) struct CGRect transitionVisibleFrame;
@property (nonatomic, readonly) struct CGRect transitionContainerFrame;
@property (nonatomic, readonly) struct CGRect transitionContentFrame;
@property (nonatomic, readonly) _Bool isTransitionable;

- (unsigned short)prepareForTransitionType: /* Error: Ran out of types for this method. */;
- (unsigned short)usesThumbnailWithImageIdentifier: /* Error: Ran out of types for this method. */;

@end
