/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIPDFHighlighter : NSObject

{
    NSMutableArray *_highLightLayers;
    struct CGColor *_highlightColor;
    struct CGColor *_borderColor;
    struct CGColor *_whiteColor;
    struct CGPDFPage *_page;
    double _enlargeFactor;
    double _pdfToViewScale;
    double inset;
}

@property (nonatomic) double inset;

- (id)init;
- (void)dealloc;
- (void)clear;
- (void)addAnimation:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setNeedsDisplay;
- (void)addRectPath:(struct CGPath *)arg1 toView:(id)arg2 layer:(id)arg3 rectangle:(CDStruct_f9662865)arg4 upright:(_Bool)arg5;
- (void)makeTheClipPath:(id)arg1 layer:(id)arg2 rectangle:(CDStruct_f9662865)arg3 upright:(_Bool)arg4;
- (void)makeTheBorderPath:(id)arg1 layer:(id)arg2 rectangle:(CDStruct_f9662865)arg3 upright:(_Bool)arg4;
- (void)addHighlightLayerFor:(id)arg1 atIndex:(unsigned long long)arg2 to:(id)arg3 animated:(_Bool)arg4;
- (void)unhide;
- (void)addHighlightFor:(id)arg1 to:(id)arg2 animated:(_Bool)arg3;

@end
