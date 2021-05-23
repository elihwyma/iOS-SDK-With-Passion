/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGLayout.h>

@interface PXGSplitLayout : PXGLayout

{
    CDStruct_d97c9657 _updateFlags;
    CDStruct_d97c9657 _additionalUpdateFlags;
    _Bool _settingSublayouts;
    _Bool _isUpdatingSublayouts;
    _Bool _isPerformingAdditionalUpdate;
    _Bool _shouldExcludeTopAndBottomPaddingFromReferenceSize;
    PXGLayout *_firstSublayout;
    PXGLayout *_secondSublayout;
    long long _mode;
    double _interlayoutSpacing;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _presentedPadding;
}

@property (retain, nonatomic) PXGLayout *firstSublayout;
@property (retain, nonatomic) PXGLayout *secondSublayout;
@property (nonatomic) long long mode;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) _Bool shouldExcludeTopAndBottomPaddingFromReferenceSize;
@property (nonatomic, readonly) struct UIEdgeInsets presentedPadding;

- (void)update;
- (void)safeAreaInsetsDidChange;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (void)_replaceSublayout:(id)arg1 withSublayout:(id)arg2 atIndex:(long long)arg3;
- (void)_updateSublayoutGeometries;
- (void)viewEnvironmentDidChange;
- (void)containingScrollViewDidScroll:(struct CGPoint)arg1;
- (void)userInterfaceDirectionDidChange;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (void)didChangeSublayoutOrigins;
- (void)didAddSublayout:(id)arg1;
- (void)willRemoveSublayout:(id)arg1;

@end
