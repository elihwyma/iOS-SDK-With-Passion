/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHPointFIFO.h>

@class CHDrawing;

@interface CHPointStrokeFIFO : CHPointFIFO

{
    CHDrawing *_strokes;
    CHDrawing *_drawing;
}

@property (retain, nonatomic) CHDrawing *strokes;
@property (retain, nonatomic) CHDrawing *drawing;

- (void)dealloc;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (id)initWithFIFO:(id)arg1;

@end
