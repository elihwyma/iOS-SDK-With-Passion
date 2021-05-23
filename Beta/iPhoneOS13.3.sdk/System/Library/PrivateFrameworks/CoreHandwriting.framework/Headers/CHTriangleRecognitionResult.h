/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHTriangleRecognitionResult : CHSketchRecognitionResult

{
    struct CGPoint _vertex1;
    struct CGPoint _vertex2;
    struct CGPoint _vertex3;
}

@property (readonly) struct CGPoint vertex1;
@property (readonly) struct CGPoint vertex2;
@property (readonly) struct CGPoint vertex3;

- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 vertex1:(struct CGPoint)arg4 vertex2:(struct CGPoint)arg5 vertex3:(struct CGPoint)arg6;

@end
