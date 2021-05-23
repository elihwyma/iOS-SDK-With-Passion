/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXBaseLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXSplitLayoutPerformer : PXBaseLayoutPerformer

{
    NSArray *children;
    long long _layoutAxis;
    double _layoutRatio;
    double _interItemSpacing;
}

@property (nonatomic) long long layoutAxis;
@property (nonatomic) double layoutRatio;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) CDStruct_392cfed4 layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (nonatomic, readonly) NSArray *children;

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

- (void)prepareForReuse;
- (void)setChildren:(id)arg1;
- (struct CGSize)performLayout;

@end
