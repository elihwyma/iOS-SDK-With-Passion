/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPHoughTransform : NSObject

{
    float *_edgeMap;
    int _mapWidth;
    int _mapHeight;
    int *_accumulator;
    int _accWidth;
    int _accHeight;
    int _accHalfHeight;
    float _angleStep;
    _Bool _verbose;
}

- (void)dealloc;
- (void)Transform;
- (id)initWithEdgeMap:(float *)arg1 mapWidth:(int)arg2 mapHeight:(int)arg3 angleStep:(float)arg4;
- (int)DetectLinesWithThreshold:(int)arg1 output:(id)arg2;

@end
