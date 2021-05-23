/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class SBIconImageView, UIView;

@interface SBIconImageCrossfadeView : SBFTouchPassThroughView

{
    UIView *_containerView;
    UIView *_crossfadeContainerView;
    SBIconImageView *_iconImageView;
    UIView *_crossfadeView;
    double _containerScaleX;
    double _containerScaleY;
    double _morphFraction;
    _Bool _masksCorners;
    _Bool _performsTrueCrossfade;
    struct CGPoint _stretchAnchorPoint;
}

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) SBIconImageView *iconImageView;
@property (nonatomic, readonly) UIView *crossfadeView;
@property (nonatomic) _Bool masksCorners;
@property (nonatomic) _Bool performsTrueCrossfade;
@property (nonatomic) struct CGPoint stretchAnchorPoint;

- (void)cleanup;
- (void)layoutSubviews;
- (void)_updateCornerMask;
- (void)setCrossfadeFraction:(double)arg1;
- (void)setMorphFraction:(double)arg1;
- (id)initWithImageView:(id)arg1 crossfadeView:(id)arg2;
- (void)prepareGeometry;
- (void)setAppSnapshotCornerRadius:(double)arg1;
- (void)applyCornerRadius:(double)arg1;
- (void)setCornerRadiusEnabled:(_Bool)arg1;

@end
