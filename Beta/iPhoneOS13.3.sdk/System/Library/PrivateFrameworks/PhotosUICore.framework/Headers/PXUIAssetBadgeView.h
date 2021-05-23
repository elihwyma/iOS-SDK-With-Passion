/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class UILabel, _PXUIAssetBadgeImageView, _PXUIAssetBadgeTopGroup;

@protocol PXUIAssetBadgeViewDelegate;

@interface PXUIAssetBadgeView : UIView

{
    struct {
        _Bool userDidSelectBadges;
    } _delegateRespondsTo;
    _Bool _isPerformingUpdate;
    struct {
        _Bool topLeftElements;
        _Bool topRightElements;
        _Bool bottomLeadingImage;
        _Bool bottomTrailingImage;
        _Bool bottomLabel;
        _Bool background;
        _Bool contentSize;
    } _needsUpdateFlags;
    _PXUIAssetBadgeTopGroup *_topLeftPrimaryGroup;
    _PXUIAssetBadgeTopGroup *_topLeftSecondaryGroup;
    _PXUIAssetBadgeTopGroup *_topRightGroup;
    _PXUIAssetBadgeImageView *_bottomLeadingImageView;
    _PXUIAssetBadgeImageView *_bottomTrailingImageView;
    UILabel *_bottomLabel;
    struct CGSize _contentSize;
    _Bool _overContent;
    id <PXUIAssetBadgeViewDelegate> _delegate;
    long long _style;
    double _contentWidth;
    struct CGSize _bottomElementsPadding;
    struct PXAssetBadgeInfo _badgeInfo;
}

@property (nonatomic, readonly) _Bool _wantsBottomLabel;
@property (weak, nonatomic) id <PXUIAssetBadgeViewDelegate> delegate;
@property (nonatomic) struct PXAssetBadgeInfo badgeInfo;
@property (nonatomic) long long style;
@property (nonatomic, getter=isOverContent) _Bool overContent;
@property (nonatomic) double contentWidth;
@property (nonatomic) struct CGSize bottomElementsPadding;

+ (id)measuringLabel;
+ (void)preloadResourcesForStyle:(long long)arg1;
+ (double)preferredHeightForStyle:(long long)arg1;

- (void)_invalidate;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setBackgroundImage:(id)arg1;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_handleButton:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)_layoutTopGroup:(id)arg1;
- (void)_removeViewsFromGroup:(id)arg1;
- (void)_layoutBottomCornersImages;
- (void)_layoutBottomLabel;
- (void)_invalidateTopLeftElements;
- (void)_invalidateTopRightElements;
- (void)_updateTopLeftElementsIfNeeded;
- (void)_updateTopRightElementsIfNeeded;
- (id)_updateTopGroup:(id)arg1 withBadgeInfo:(struct PXAssetBadgeInfo)arg2;
- (void)_invalidateBottomLeadingImage;
- (void)_updateBottomLeadingImageIfNeeded;
- (void)_invalidateBottomTrailingImage;
- (void)_updateBottomTrailingImageIfNeeded;
- (void)_invalidateBottomLabel;
- (void)_updateBottomLabelIfNeeded;
- (void)_invalidateBackground;
- (void)_updateBackgroundIfNeeded;
- (void)_invalidateContentSize;
- (void)_updateContentSizeIfNeeded;

@end
