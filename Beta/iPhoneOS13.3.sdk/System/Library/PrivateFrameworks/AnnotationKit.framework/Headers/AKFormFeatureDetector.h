/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@protocol AKFormFeatureDetectorDelegate;

@interface AKFormFeatureDetector : NSObject

{
    NSObject<AKFormFeatureDetectorDelegate> *_delegate;
}

@property (weak, nonatomic) NSObject<AKFormFeatureDetectorDelegate> *delegate;

+ (struct CGContext *)_newBitmapInRect:(struct CGRect)arg1 onPage:(id)arg2 scale:(double)arg3;
+ (struct CGContext *)_newBitmapFromCGPDFDocument:(struct CGPDFDocument *)arg1;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)_featureAtPoint:(struct CGPoint)arg1 onPage:(id)arg2 mode:(long long)arg3;
- (id)_checkboxAtPoint:(struct CGPoint)arg1 onPage:(id)arg2 pageBitmap:(struct CGContext *)arg3;
- (struct CGRect)_translateFeature:(id)arg1 toPageOrigin:(struct CGPoint)arg2;
- (id)_formFieldAtPoint:(struct CGPoint)arg1 onPage:(id)arg2 enforceMaxWidth:(_Bool)arg3 pageBitmap:(struct CGContext *)arg4;
- (id)_snappedFormFieldForField:(id)arg1;
- (id)_defaultFeatureForPoint:(struct CGPoint)arg1 onPage:(id)arg2 snapToVerticalEdges:(_Bool)arg3;
- (id)_lineAtPoint:(struct CGPoint)arg1 onPage:(id)arg2 useVerticalCenter:(_Bool)arg3;
- (id)_boxOnLine:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)_floatPixelBufferForCGContext:(struct CGContext *)arg1 imageBuffer:(struct vImage_Buffer *)arg2;
- (float *)_thresholdPixelStripIn:(float *)arg1 withImageLenth:(long long)arg2 thresholdValue:(float)arg3 startingPtr:(float *)arg4 withThresholdLength:(long long)arg5;
- (float *)_shiftScanAwayFromEdgeInPixels:(float *)arg1;
- (long long)_scanToEdgeOfFormFieldStartingAtPoint:(struct CGPoint)arg1 withBitmapData:(float *)arg2 width:(long long)arg3 height:(long long)arg4 bottomRowStartsAt:(float *)arg5 bottomRowEndsAt:(float *)arg6 withLineThickness:(long long)arg7 gapWidthForDottedLines:(long long)arg8 separatorHeights:(id)arg9 andRegionHeight:(long long *)arg10 trackAverageSpacingWidth:(long long *)arg11 trackFarthestPossibleEdge:(long long *)arg12 trackNumberOfSegments:(long long *)arg13 trackNumberOfGapsForDottedLine:(long long *)arg14 goingLeft:(_Bool)arg15;
- (unsigned long long)_findLineEdgeTypeOnLeft:(_Bool)arg1 startingAt:(float *)arg2 withPageLeftEdge:(float *)arg3 withPageWidth:(long long)arg4 andFormHeight:(unsigned long long)arg5;
- (struct CGRect)_findExtentForLineTop:(double)arg1 lineBottom:(double)arg2 x:(double)arg3 onPage:(id)arg4;
- (CDStruct_425ba859)_findVerticalEdgesAtPoint:(struct CGPoint)arg1 extent:(long long)arg2 onPage:(id)arg3;
- (id)featureAtPoint:(struct CGPoint)arg1 onPage:(id)arg2 mode:(long long)arg3;
- (void)_drawThresholdedBitmapForTestForPageBitmap:(struct CGContext *)arg1 withPixels:(float *)arg2;

@end
