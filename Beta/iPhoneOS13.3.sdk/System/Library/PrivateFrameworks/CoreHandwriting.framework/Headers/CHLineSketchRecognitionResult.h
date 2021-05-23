/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHSketchRecognitionResult.h>

@class NSArray;

@interface CHLineSketchRecognitionResult : CHSketchRecognitionResult

{
    _Bool _cornerLine;
    int _startEndpointType;
    int _endEndpointType;
    NSArray *_pathPoints;
    struct CGPoint _startLocation;
    struct CGPoint _endLocation;
    struct CGPoint _midpointLocation;
    struct CGPoint _controlPoint;
}

@property (readonly) int startEndpointType;
@property (readonly) int endEndpointType;
@property (readonly) struct CGPoint startLocation;
@property (readonly) struct CGPoint endLocation;
@property (readonly) struct CGPoint midpointLocation;
@property (readonly) struct CGPoint controlPoint;
@property (readonly) NSArray *pathPoints;
@property (readonly) _Bool cornerLine;

- (void)dealloc;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 startLocation:(struct CGPoint)arg4 startEndpointType:(int)arg5 endLocation:(struct CGPoint)arg6 endEndpointType:(int)arg7 midPointLocation:(struct CGPoint)arg8 controlPointLocation:(struct CGPoint)arg9;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 startLocation:(struct CGPoint)arg4 startEndpointType:(int)arg5 endLocation:(struct CGPoint)arg6 endEndpointType:(int)arg7 midPointLocation:(struct CGPoint)arg8 controlPointLocation:(struct CGPoint)arg9 pathPoints:(id)arg10;

@end
