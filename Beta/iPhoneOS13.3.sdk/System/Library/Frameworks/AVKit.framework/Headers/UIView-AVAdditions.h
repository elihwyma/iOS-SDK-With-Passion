/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString;

@interface UIView (AVAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leadingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *trailingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leftAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *rightAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *topAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (nonatomic, readonly) NSLayoutDimension *widthAnchor;
@property (nonatomic, readonly) NSLayoutDimension *heightAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *centerXAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *centerYAnchor;

- (id)avkit_ancestorViewPassingTest:(CDUnknownBlockType)arg1;
- (void)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2 bestSoFar:(inout id *)arg3 shortestDistanceSoFar:(inout double *)arg4;
- (_Bool)avkit_isCompletelyTransparent;
- (struct UIEdgeInsets)avkit_overrideLayoutMarginsForCounterRotation;
- (_Bool)avkit_isVideoGravityFrozen;
- (_Bool)avkit_isCounterRotatedForTransition;
- (_Bool)avkit_isBeingDismissed;
- (void)avkit_needsUpdateBackdropCaptureViewHidden;
- (id)avkit_backdropGroupLeader;
- (_Bool)avkit_isBeingScrollTested;
- (_Bool)avkit_isBeingScrolled;
- (_Bool)avkit_isBeingScrolledQuickly;
- (_Bool)avkit_isInAScrollView;
- (_Bool)avkit_isAncestorOfViewPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)avkit_isDescendantOfNonPagingScrollView;
- (void)avkit_makeSubtreeDisallowGroupBlending;
- (_Bool)avkit_hasFullScreenLayoutClass;
- (id)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)avkit_isInAWindowAndVisible;
- (_Bool)avkit_wantsAnimatedViewTransitions;
- (_Bool)avkit_isDescendantOfViewPassingTest:(CDUnknownBlockType)arg1;
- (struct CGRect)avkit_largestInscribedRectInBoundingPathWithCenter:(struct CGPoint)arg1 aspectRatio:(double)arg2;
- (id)avkit_constraintsFromCenterAnchorsToCenterAnchorsOfItem:(id)arg1;
- (id)avkit_constraintsFromEdgeAnchorsToEdgeAnchorsOfItem:(id)arg1;
- (id)avkit_constraintsFromCenterAndDimensionAnchorsToCenterAndDimensionAnchorsOfItem:(id)arg1;
- (id)avkit_constraintsFromDimensionAnchorsToSize:(struct CGSize)arg1;

@end
