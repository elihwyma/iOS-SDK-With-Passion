/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CMDrawableMapper, NSAffineTransform, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CMDrawingContext : NSObject

{
    CMDrawableMapper *_mapper;
    NSMutableArray *_actions;
    struct CGRect _frame;
    struct CGRect _finalFrame;
    struct __CFData *_data;
    struct CGDataConsumer *_dataConsumer;
    struct CGContext *_cgContext;
    NSAffineTransform *_currentTransform;
    NSMutableArray *_transforms;
    struct CGImage *_fillImage;
}

@property (weak) CMDrawableMapper *mapper;

- (void)dealloc;
- (struct CGRect)frame;
- (void)setLineWidth:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFillColor:(struct CGColor *)arg1;
- (void)setStrokeColor:(struct CGColor *)arg1;
- (void)setFillImage:(struct CGImage *)arg1;
- (void)addPath:(struct CGPath *)arg1;
- (float)currentScaleFactor;
- (void)_applyTransform:(id)arg1;
- (struct CGContext *)_cgContext;
- (void)addTransform:(id)arg1;
- (void)restoreLastTransform;
- (struct CGRect)transformRectToGroup:(struct CGRect)arg1;
- (struct CGRect)pdfFrame;
- (id)copyPDF;
- (void)_copyCGContext;
- (void)_playbackActions;
- (void)_closeContext;
- (void)_addTransform:(id)arg1;
- (void)_restoreLastTransform;
- (struct CGRect)_transformRect:(struct CGRect)arg1 withTransform:(id)arg2;
- (struct CGAffineTransform)currentTransform;
- (void)setLineDash:(id)arg1;
- (void)addDebugPath:(struct CGPath *)arg1;
- (struct CGRect)transformRectToPage:(struct CGRect)arg1;

@end
