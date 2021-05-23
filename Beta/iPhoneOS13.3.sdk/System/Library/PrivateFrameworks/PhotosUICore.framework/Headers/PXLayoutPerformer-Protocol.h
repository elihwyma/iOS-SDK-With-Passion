/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@class NSArray, PXLayoutPerformerOutput;

@protocol PXLayoutPerformer

@property (nonatomic) CDStruct_392cfed4 layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (nonatomic, readonly) NSArray *children;

+ (unsigned short)performLayoutWithLayoutInput:layoutOutput:usingBlock: /* Error: Ran out of types for this method. */;

- (unsigned short)prepareForReuse;
- (unsigned short)performLayout;

@end
