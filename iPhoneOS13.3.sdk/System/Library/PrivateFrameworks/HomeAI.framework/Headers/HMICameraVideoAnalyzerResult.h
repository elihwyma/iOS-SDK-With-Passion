//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class HMICameraVideoFragment, NSArray, NSDate, NSDictionary;

@interface HMICameraVideoAnalyzerResult : NSObject <NSSecureCoding>
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
    NSUInteger _lastSequenceNumber;
    CDStruct_1b6d18a9 _duration;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSUInteger lastSequenceNumber; // @synthesize lastSequenceNumber=_lastSequenceNumber;
@property float analysisFPS; // @synthesize analysisFPS=_analysisFPS;
@property(retain) HMICameraVideoFragment *videoFragment; // @synthesize videoFragment=_videoFragment;
@property double timeSinceFragmentWasSubmitted; // @synthesize timeSinceFragmentWasSubmitted=_timeSinceFragmentWasSubmitted;
@property double timeToAnalyzeFragment; // @synthesize timeToAnalyzeFragment=_timeToAnalyzeFragment;
@property long long resultCode; // @synthesize resultCode=_resultCode;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly) NSArray *frameResults; // @synthesize frameResults=_frameResults;
@property(readonly) NSArray *posterFrames; // @synthesize posterFrames=_posterFrames;
@property(readonly) NSDictionary *annotationScores; // @synthesize annotationScores=_annotationScores;
@property(readonly) long long events; // @synthesize events=_events;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1 excludeTime:(BOOL)arg2;
- (long long)confidenceThatEventOccurred:(long long)arg1;
- (id)initWithEvents:(long long)arg1 posterFrames:(id)arg2 frameResults:(id)arg3 annotationScores:(id)arg4 duration:(CDStruct_1b6d18a9)arg5 creationDate:(id)arg6 resultCode:(long long)arg7 lastSequenceNumber:(NSUInteger)arg8;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

