/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHRectangleSketchRecognitionResult : CHSketchRecognitionResult

{
    struct CGPoint _upperLeftPoint;
    struct CGPoint _upperRightPoint;
    struct CGPoint _lowerLeftPoint;
    struct CGPoint _lowerRightPoint;
}

@property (readonly) struct CGPoint upperLeftPoint;
@property (readonly) struct CGPoint upperRightPoint;
@property (readonly) struct CGPoint lowerLeftPoint;
@property (readonly) struct CGPoint lowerRightPoint;

- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 upperLeftPoint:(struct CGPoint)arg4 upperRightPoint:(struct CGPoint)arg5 lowerLeftPoint:(struct CGPoint)arg6 lowerRightPoint:(struct CGPoint)arg7;

@end
