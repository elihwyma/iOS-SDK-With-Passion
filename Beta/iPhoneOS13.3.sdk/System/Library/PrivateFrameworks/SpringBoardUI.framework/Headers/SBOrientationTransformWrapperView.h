/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, _SBOrientationTransformedContentView;

@interface SBOrientationTransformWrapperView : UIView

{
    _SBOrientationTransformedContentView *_transformedView;
    long long _contentOrientation;
    long long _containerOrientation;
    NSMutableArray *_hitTestViews;
}

@property (nonatomic) long long contentOrientation;
@property (nonatomic) long long containerOrientation;
@property (nonatomic, readonly) NSArray *contentViews;

- (id)description;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateGeometry;
- (struct CGSize)_referenceContainerSize;
- (void)addContentView:(id)arg1;
- (void)addHitTestView:(id)arg1;
- (void)addGestureRecognizerToTransformedView:(id)arg1;
- (void)removeGestureRecognizerFromTransformedView:(id)arg1;
- (void)bringContentSubviewToFront:(id)arg1;
- (struct CGPoint)convertPointFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGRect)arg1;
- (struct CGAffineTransform)convertTransformFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGAffineTransform)arg1;
- (struct CGPoint)convertPointFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGRect)arg1;
- (struct CGAffineTransform)convertTransformFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGAffineTransform)arg1;

@end
