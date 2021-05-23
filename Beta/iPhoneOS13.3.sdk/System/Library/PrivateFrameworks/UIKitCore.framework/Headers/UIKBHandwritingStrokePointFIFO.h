/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class TIHandwritingStrokes;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO

{
    TIHandwritingStrokes *_strokes;
}

@property (retain, nonatomic) TIHandwritingStrokes *strokes;

- (void)clear;
- (void)flush;
- (void)addPoint:(struct)arg1;
- (id)initWithFIFO:(id)arg1;

@end
