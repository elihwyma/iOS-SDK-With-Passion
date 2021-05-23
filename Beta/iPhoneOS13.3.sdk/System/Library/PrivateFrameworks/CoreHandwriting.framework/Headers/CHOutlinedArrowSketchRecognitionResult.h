/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHOutlinedArrowSketchRecognitionResult : CHSketchRecognitionResult

{
    struct CGPoint _center;
    struct CGSize _size;
    struct CGPoint _controlPoint;
}

@property (readonly) struct CGPoint center;
@property (readonly) struct CGSize size;
@property (readonly) struct CGPoint controlPoint;

- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(struct CGPoint)arg4 size:(struct CGSize)arg5 controlPointLocation:(struct CGPoint)arg6;

@end
