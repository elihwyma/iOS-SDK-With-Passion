/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPFrameScoreFilter : NSObject

{
    int _numFilterTabs;
    float *_scoreArray;
    float _distanceVariance;
    float _diffVariance;
    int _numOfScores;
}

- (void)dealloc;
- (id)initWithFilterTabs:(int)arg1 distanceVariance:(float)arg2 diffVariance:(float)arg3;
- (float)processFrameScore:(float)arg1 validScore:(_Bool)arg2;

@end
