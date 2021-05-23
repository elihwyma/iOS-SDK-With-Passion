/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXGCompositeLayout, PXGLayout, PXGSublayoutDataStore;

@interface PXGSublayoutComposition : NSObject

{
    CDStruct_d97c9657 _updateFlags;
    long long _lastSublayoutDataStoreVersion;
    PXGCompositeLayout *_compositeLayout;
    PXGSublayoutDataStore *_sublayoutDataStore;
    struct CGSize _referenceSize;
}

@property (nonatomic) long long lastSublayoutDataStoreVersion;
@property (weak, nonatomic) PXGCompositeLayout *compositeLayout;
@property (retain, nonatomic) PXGSublayoutDataStore *sublayoutDataStore;
@property (nonatomic, readonly) struct CGSize referenceSize;
@property (nonatomic, readonly) PXGLayout *layout;
@property (nonatomic, readonly) long long numberOfSublayouts;
@property (nonatomic, readonly) CDStruct_ff9a7497 *sublayoutGeometries;
@property (nonatomic, readonly) struct CGRect contentBounds;

- (void)referenceSizeDidChange;
- (void)setReferenceSize:(struct CGSize)arg1;
- (void)updateEstimatedSublayoutGeometries;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(CDUnknownBlockType)arg2;
- (void)updateSublayoutAttributes;
- (void)enumerateSublayoutProvidersForRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)updateEstimate;
- (void)invalidateSublayoutAttributes;
- (void)invalidateSublayoutContentSizes;
- (void)invalidateEstimatedSublayoutGeometries;
- (long long)anchorSublayoutIndexForAnchoredContentEdges:(unsigned long long)arg1;

@end
