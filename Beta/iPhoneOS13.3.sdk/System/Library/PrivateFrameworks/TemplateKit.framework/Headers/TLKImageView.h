/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSString, NUIBoxArrangement, TLKAppearance, TLKArrangementItem, TLKImage, UIImageView;

@interface TLKImageView

{
    _Bool _useButtonColoring;
    TLKImage *_tlkImage;
    unsigned long long _prominence;
    TLKAppearance *_appearanceOverride;
    long long _verticalAlignment;
    long long _horizontalAlignment;
    UIImageView *_imageView;
    TLKArrangementItem *_sizingHelper;
    NUIBoxArrangement *_boxArrangement;
    struct CGSize _minimumSize;
    struct CGSize _maximumSize;
    struct CGRect _rectOfShadow;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) TLKArrangementItem *sizingHelper;
@property (retain, nonatomic) NUIBoxArrangement *boxArrangement;
@property (nonatomic) struct CGRect rectOfShadow;
@property (retain, nonatomic) TLKImage *tlkImage;
@property (nonatomic) unsigned long long prominence;
@property (nonatomic) _Bool useButtonColoring;
@property (retain, nonatomic) TLKAppearance *appearanceOverride;
@property (nonatomic) struct CGSize minimumSize;
@property (nonatomic) struct CGSize maximumSize;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) long long horizontalAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)layerClass;
+ (struct CGSize)roundedSizeForSize:(struct CGSize)arg1;
+ (_Bool)imageIsEligibleForShadow:(id)arg1 isTemplate:(_Bool)arg2;
+ (_Bool)sizeIsShadowWorthy:(struct CGSize)arg1;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)didMoveToWindow;
- (long long)effectiveUserInterfaceLayoutDirection;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (long long)numberOfItemsInBoxArrangement:(id)arg1;
- (id)boxArrangement:(id)arg1 itemAtIndex:(long long)arg2 horizontalAlignment:(long long *)arg3 verticalAlignment:(long long *)arg4;
- (void)observedPropertiesChanged;
- (struct CGSize)constrainedSizeForImageSize:(struct CGSize)arg1;
- (void)invalidateIntrinsicContentSizeIfNecessary;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)updateShadow;
- (id)actualImageView;

@end
