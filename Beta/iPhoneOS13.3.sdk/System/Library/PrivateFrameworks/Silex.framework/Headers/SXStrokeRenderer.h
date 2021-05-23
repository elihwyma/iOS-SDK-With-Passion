/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXComponentView;

@interface SXStrokeRenderer : NSObject

{
    SXComponentView *_componentView;
}

@property (weak, nonatomic, readonly) SXComponentView *componentView;

- (id)initWithComponentView:(id)arg1;
- (id)lineForStyle:(id)arg1 andFrame:(struct CGRect)arg2;
- (id)dottedBorders:(id)arg1 forFrame:(struct CGRect)arg2;
- (id)dashedBorders:(id)arg1 forFrame:(struct CGRect)arg2;
- (id)dottedStrokesForBorder:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)cropImage:(id)arg1 withRect:(struct CGRect)arg2;
- (CDStruct_b7523c42)framesForBorder:(id)arg1 contentSize:(struct CGSize)arg2;
- (struct CGContext *)newContextForFrame:(struct CGRect)arg1;
- (void)drawDashedSide:(id)arg1 borderSide:(int)arg2 withStyleFrames:(CDStruct_b7523c42)arg3 inContext:(struct CGContext *)arg4;
- (id)imageFromContext:(struct CGContext *)arg1;
- (double)phaseForBorderWidth:(double)arg1 style:(int)arg2 borderSide:(int)arg3 length:(double)arg4 startingGap:(double *)arg5;
- (double)dashLengthForWidth:(double)arg1 andStyle:(int)arg2;
- (void)drawFullDottedBorder:(id)arg1 withFrame:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
- (id)renderBorders:(id)arg1 forFrame:(struct CGRect)arg2;

@end
