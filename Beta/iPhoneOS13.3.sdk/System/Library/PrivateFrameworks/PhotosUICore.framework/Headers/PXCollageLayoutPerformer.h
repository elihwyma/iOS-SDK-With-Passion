/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXBaseLayoutPerformer.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSMutableArray, PXLayoutPerformerOutput, PXLeafLayoutPerformer, PXSplitLayoutPerformer;

@interface PXCollageLayoutPerformer : PXBaseLayoutPerformer <Swift>

{
    _Bool _portraitBias;
    double _outerLayoutRatio;
    double _interItemSpacing;
    long long _numberOfVisibleItems;
    PXLeafLayoutPerformer *_singleItemPerformer;
    PXSplitLayoutPerformer *_twoItemPerformer;
    PXSplitLayoutPerformer *_threeItemPerformer;
    PXSplitLayoutPerformer *_threeItemNestedPerformer;
    NSMutableArray *_mutableChildren;
}

@property (retain, nonatomic) PXLeafLayoutPerformer *singleItemPerformer;
@property (retain, nonatomic) PXSplitLayoutPerformer *twoItemPerformer;
@property (retain, nonatomic) PXSplitLayoutPerformer *threeItemPerformer;
@property (retain, nonatomic) PXSplitLayoutPerformer *threeItemNestedPerformer;
@property (retain, nonatomic) NSMutableArray *mutableChildren;
@property (nonatomic) double outerLayoutRatio;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) _Bool portraitBias;
@property (nonatomic) long long numberOfVisibleItems;
@property (nonatomic) CDStruct_392cfed4 layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (nonatomic, readonly) NSArray *children;

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

- (id)init;
- (void)prepareForReuse;
- (struct CGSize)performLayout;

@end
