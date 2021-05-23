/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCPSoundDetector : NSObject

{
    NSMutableArray *_results;
    CDStruct_1b6d18a9 _activeStart;
    CDStruct_1b6d18a9 _activeEnd;
    int _length;
    float _sampleRate;
    CDStruct_1b6d18a9 _trackStart;
    float _activeConfidence;
    float _threshold;
    int _minDetections;
    NSString *_resultsKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)results;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (void)addDetectionFromTime:(const CDStruct_1b6d18a9 *)arg1 toTime:(const CDStruct_1b6d18a9 *)arg2 confidence:(float)arg3;
- (id)initWithTrackStart:(CDStruct_1b6d18a9)arg1 threshold:(float)arg2 resultsKey:(id)arg3;

@end
