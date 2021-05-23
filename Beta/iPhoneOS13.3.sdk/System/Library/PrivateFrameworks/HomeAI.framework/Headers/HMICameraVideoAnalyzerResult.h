/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSObject.h>

@class HMICameraVideoFragment, NSArray, NSDate, NSDictionary;

@interface HMICameraVideoAnalyzerResult : NSObject

{
    float _analysisFPS;
    long long _events;
    NSDictionary *_annotationScores;
    NSArray *_posterFrames;
    NSArray *_frameResults;
    NSDate *_creationDate;
    long long _resultCode;
    double _timeToAnalyzeFragment;
    double _timeSinceFragmentWasSubmitted;
    HMICameraVideoFragment *_videoFragment;
    unsigned long long _lastSequenceNumber;
    CDStruct_1b6d18a9 _duration;
}

@property CDStruct_1b6d18a9 duration;
@property (retain) NSDate *creationDate;
@property (readonly) unsigned long long lastSequenceNumber;
@property (readonly) long long events;
@property (readonly) NSDictionary *annotationScores;
@property (readonly) NSArray *posterFrames;
@property (readonly) NSArray *frameResults;
@property long long resultCode;
@property double timeToAnalyzeFragment;
@property double timeSinceFragmentWasSubmitted;
@property (retain) HMICameraVideoFragment *videoFragment;
@property float analysisFPS;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)confidenceThatEventOccurred:(long long)arg1;
- (id)initWithEvents:(long long)arg1 posterFrames:(id)arg2 frameResults:(id)arg3 annotationScores:(id)arg4 duration:(CDStruct_1b6d18a9)arg5 creationDate:(id)arg6 resultCode:(long long)arg7 lastSequenceNumber:(unsigned long long)arg8;
- (_Bool)isEqual:(id)arg1 excludeTime:(_Bool)arg2;

@end
