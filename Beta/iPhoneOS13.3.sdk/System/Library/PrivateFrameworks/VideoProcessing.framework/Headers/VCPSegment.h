/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPSegment : NSObject

{
    float _sumOfScore;
    float _curationScore;
    unsigned long long _numOfFrames;
    unsigned long long _numOfValidFrames;
    CDStruct_e83c9415 _timeRange;
}

@property (nonatomic) CDStruct_e83c9415 timeRange;
@property (nonatomic, readonly) unsigned long long numOfFrames;
@property (nonatomic, readonly) unsigned long long numOfValidFrames;
@property (nonatomic) float curationScore;

- (id)init;
- (float)score;
- (void)updateDuration:(CDStruct_1b6d18a9)arg1;
- (void)mergeSegment:(id)arg1;
- (void)copyFrom:(id)arg1;
- (float)sumOfScore;
- (id)initWithTimestamp:(CDStruct_1b6d18a9)arg1 score:(float)arg2 valid:(_Bool)arg3;
- (void)updateWithFirstFrame:(CDStruct_e83c9415)arg1 score:(float)arg2 valid:(_Bool)arg3;
- (void)updateSegment:(CDStruct_e83c9415)arg1 score:(float)arg2 valid:(_Bool)arg3;
- (void)trimSegment:(CDStruct_1b6d18a9)arg1 fromStart:(_Bool)arg2;
- (_Bool)isContentTooShort;

@end
