/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXBaseLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXStackLayoutPerformer : PXBaseLayoutPerformer

{
    NSArray *children;
    long long _layoutAxis;
    struct CGSize _interItemSpacing;
    struct CGSize _itemSize;
}

@property (nonatomic) long long layoutAxis;
@property (nonatomic) struct CGSize interItemSpacing;
@property (nonatomic) struct CGSize itemSize;
@property (nonatomic) CDStruct_392cfed4 layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (nonatomic, readonly) NSArray *children;

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

- (void)prepareForReuse;
- (void)setChildren:(id)arg1;
- (struct CGSize)performLayout;
- (struct CGSize)_calculateSizeForLayout;
- (void)_performLayoutPass;

@end
