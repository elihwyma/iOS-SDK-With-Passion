/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSObject.h>

@interface HMICameraVideoAnalyzerConfiguration : NSObject

{
    _Bool _transcodeFragment;
    _Bool _useScheduler;
    _Bool _inMediaAnalysis;
    unsigned long long _posterFrameGenerationInterval;
    unsigned long long _posterFrameHeight;
    double _maxFragmentAnalysisDuration;
    double _maxFragmentDuration;
    unsigned long long _serviceType;
    unsigned long long _startingMediaIntegritySequenceNumber;
}

@property unsigned long long serviceType;
@property unsigned long long startingMediaIntegritySequenceNumber;
@property _Bool transcodeFragment;
@property _Bool useScheduler;
@property _Bool inMediaAnalysis;
@property (readonly) unsigned long long posterFrameGenerationInterval;
@property (readonly) unsigned long long posterFrameHeight;
@property (readonly) double maxFragmentAnalysisDuration;
@property (readonly) double maxFragmentDuration;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPosterFrameGenerationInterval:(unsigned long long)arg1 posterFrameHeight:(unsigned long long)arg2 maxFragmentAnalysisDuration:(double)arg3 maxFragmentDuration:(double)arg4;
- (unsigned long long)getAnalysisServiceTypePreference;

@end
