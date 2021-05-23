/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGLayout.h>

@class NSString;

@interface PXGStackLayout : PXGLayout

{
    CDStruct_d97c9657 _updateFlags;
    _Bool _isUpdatingSublayouts;
    struct CGPoint *_sublayoutOriginsBeforeUpdate;
    long long _axis;
    double _interlayoutSpacing;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _faultInOutsets;
    struct UIEdgeInsets _faultOutOutsets;
}

@property (nonatomic) struct UIEdgeInsets faultInOutsets;
@property (nonatomic) struct UIEdgeInsets faultOutOutsets;
@property (nonatomic) long long axis;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct UIEdgeInsets padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)update;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (void)viewEnvironmentDidChange;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (void)didAddSublayout:(id)arg1;
- (void)willRemoveSublayout:(id)arg1;
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)_updateSublayouts;
- (void)_invalidateEstimatedSublayoutContentSizes;
- (void)_updateInterlayoutSpacing;

@end
