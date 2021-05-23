/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@class UIColor;

@interface PXCMMSpec : PXFeatureSpec

{
    unsigned long long _activityType;
    struct UIColor *_reviewBackgroundColor;
    long long _reviewGridContentMode;
    double _reviewHeaderTopInset;
    double _reviewHeaderCornerRadius;
    double _reviewBannerHeight;
    double _reviewSendBackFooterHeight;
    double _reviewFooterBottomInset;
    double _reviewSectionHeaderHeight;
    UIColor *_composeRecipientViewBackgroundColor;
    double _composeTableViewCellHeight;
    double _composeTableViewCellInset;
    double _composeCornerRadius;
    double _composePrivacyMessageInset;
    double _composeHeaderVerticalPadding;
    double _bubbleStatusIconCornerRadius;
    struct CGSize _reviewGridInterItemSpacing;
    struct CGSize _reviewGridItemSize;
    struct CGSize _composeTableViewCellImageViewSize;
    struct UIEdgeInsets _reviewContentInsets;
    struct UIEdgeInsets _reviewSafeAreaInsets;
    struct UIEdgeInsets _reviewGridContentInsets;
    struct UIEdgeInsets _composeHeaderLabelMargins;
    struct UIEdgeInsets _composeFooterInsets;
    struct UIEdgeInsets _composeFooterMargins;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) UIColor *reviewBackgroundColor;
@property (nonatomic, readonly) struct UIEdgeInsets reviewContentInsets;
@property (nonatomic, readonly) struct CGSize reviewGridInterItemSpacing;
@property (nonatomic, readonly) struct CGSize reviewGridItemSize;
@property (nonatomic, readonly) struct UIEdgeInsets reviewSafeAreaInsets;
@property (nonatomic, readonly) struct UIEdgeInsets reviewGridContentInsets;
@property (nonatomic, readonly) long long reviewGridContentMode;
@property (nonatomic, readonly) double reviewHeaderTopInset;
@property (nonatomic, readonly) double reviewHeaderCornerRadius;
@property (nonatomic, readonly) double reviewBannerHeight;
@property (nonatomic, readonly) double reviewSendBackFooterHeight;
@property (nonatomic, readonly) double reviewFooterBottomInset;
@property (nonatomic, readonly) double reviewSectionHeaderHeight;
@property (nonatomic, readonly) UIColor *composeRecipientViewBackgroundColor;
@property (nonatomic, readonly) double composeTableViewCellHeight;
@property (nonatomic, readonly) double composeTableViewCellInset;
@property (nonatomic, readonly) struct CGSize composeTableViewCellImageViewSize;
@property (nonatomic, readonly) double composeCornerRadius;
@property (nonatomic, readonly) double composePrivacyMessageInset;
@property (nonatomic, readonly) struct UIEdgeInsets composeHeaderLabelMargins;
@property (nonatomic, readonly) double composeHeaderVerticalPadding;
@property (nonatomic, readonly) struct UIEdgeInsets composeFooterInsets;
@property (nonatomic, readonly) struct UIEdgeInsets composeFooterMargins;
@property (nonatomic, readonly) UIColor *bubbleBackgroundColor;
@property (nonatomic, readonly) double bubbleStatusIconCornerRadius;

+ (double)maxBubbleWidthForDisplayScale:(double)arg1;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (double)_composeTableViewCellHeight;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 activityType:(unsigned long long)arg3;
- (double)_reviewSectionHeaderHeightForContentSize:(id)arg1;

@end
