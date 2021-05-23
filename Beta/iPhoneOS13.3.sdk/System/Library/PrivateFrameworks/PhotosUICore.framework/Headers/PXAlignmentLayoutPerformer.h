/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXBaseLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXAlignmentLayoutPerformer : PXBaseLayoutPerformer

{
    NSArray *_children;
    long long _xAlignment;
    long long _yAlignment;
}

@property (nonatomic) long long xAlignment;
@property (nonatomic) long long yAlignment;
@property (nonatomic) CDStruct_392cfed4 layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (nonatomic, readonly) NSArray *children;

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

- (void)setChildren:(id)arg1;
- (struct CGSize)performLayout;
- (void)preprareForReuse;

@end
