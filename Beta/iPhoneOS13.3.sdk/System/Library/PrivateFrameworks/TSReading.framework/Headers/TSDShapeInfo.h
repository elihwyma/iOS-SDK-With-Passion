/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDStyledInfo.h>

@class NSString, TSDFill, TSDLineEnd, TSDPathSource, TSDShapeStyle;

@interface TSDShapeInfo : TSDStyledInfo

{
    TSDPathSource *mPathSource;
    TSDShapeStyle *mStyle;
    TSDLineEnd *mHeadLineEnd;
    TSDLineEnd *mTailLineEnd;
}

@property (retain, nonatomic) TSDPathSource *pathSource;
@property (nonatomic, readonly) TSDShapeStyle *shapeStyle;
@property (copy, nonatomic) TSDFill *fill;
@property (retain, nonatomic) TSDLineEnd *headLineEnd;
@property (retain, nonatomic) TSDLineEnd *tailLineEnd;
@property (nonatomic, readonly) _Bool supportsTextInset;
@property (nonatomic, readonly) _Bool supportsShrinkTextToFit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)style;
- (void)setStyle:(id)arg1;
- (int)elementKind;
- (void)setGeometry:(id)arg1;
- (id)objectForProperty:(int)arg1;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (Class)repClass;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (void)setValuesForProperties:(id)arg1;
- (id)animationFilters;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (Class)styleClass;

@end
