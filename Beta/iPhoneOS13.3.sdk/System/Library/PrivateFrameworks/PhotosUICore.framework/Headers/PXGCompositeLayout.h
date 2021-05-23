/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGLayout.h>

@class NSString, PXGSublayoutComposition;

@protocol PXGSublayoutFaultingDelegate;

@interface PXGCompositeLayout : PXGLayout

{
    CDStruct_d97c9657 _updateFlags;
    _Bool _isUpdatingSublayouts;
    PXGSublayoutComposition *_composition;
    id <PXGSublayoutFaultingDelegate> _sublayoutFaultingDelegate;
    struct UIEdgeInsets _faultInOutsets;
    struct UIEdgeInsets _faultOutOutsets;
}

@property (nonatomic) struct UIEdgeInsets faultInOutsets;
@property (nonatomic) struct UIEdgeInsets faultOutOutsets;
@property (retain, nonatomic) PXGSublayoutComposition *composition;
@property (weak, nonatomic) id <PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)update;
- (id)initWithComposition:(id)arg1;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (void)viewEnvironmentDidChange;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)didAddSublayout:(id)arg1;
- (void)willRemoveSublayout:(id)arg1;
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)_updateSublayouts;
- (void)_invalidateSublayouts;

@end
