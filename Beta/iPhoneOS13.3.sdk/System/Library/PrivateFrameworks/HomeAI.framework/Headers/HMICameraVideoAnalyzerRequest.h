/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMICameraVideoAnalyzer, HMICameraVideoAnalyzerRequestLog, HMICameraVideoAssetReader, HMICameraVideoEncoderSession, HMICameraVideoFragment, HMICameraVideoFrameSelector, HMICameraVideoPosterFrameGenerator, HMICameraVideoResourceAttributes, NSArray, NSDate, NSMutableArray, NSString;

@interface HMICameraVideoAnalyzerRequest : HMFObject

{
    NSDate *_analysisSubmissionTime;
    NSDate *_analysisStartTime;
    double _maxAnalysisFPS;
    double _analysisFPS;
    HMICameraVideoFragment *_fragment;
    HMICameraVideoResourceAttributes *_attributes;
    HMICameraVideoEncoderSession *_encoderSession;
    HMICameraVideoPosterFrameGenerator *_posterFrameGenerator;
    HMICameraVideoFrameSelector *_frameSelector;
    HMICameraVideoAssetReader *_assetReader;
    HMICameraVideoAnalyzer *_analyzer;
    long long _events;
    long long _eventTypes;
    NSMutableArray *_videoFrameResults;
    NSMutableArray *_significantEventsInternal;
    HMICameraVideoAnalyzerRequestLog *_log;
    long long _phase;
    long long _flag;
}

@property (readonly) NSMutableArray *significantEventsInternal;
@property (readonly) HMICameraVideoAnalyzerRequestLog *log;
@property long long phase;
@property long long flag;
@property (readonly) NSDate *analysisSubmissionTime;
@property (readonly) double timeSinceAnalysisSubmission;
@property (readonly) NSDate *analysisStartTime;
@property (readonly) double timeSinceAnalysisStart;
@property (readonly) double maxAnalysisFPS;
@property (readonly) double analysisFPS;
@property (readonly) HMICameraVideoFragment *fragment;
@property (readonly) HMICameraVideoResourceAttributes *attributes;
@property (readonly) HMICameraVideoEncoderSession *encoderSession;
@property (readonly) HMICameraVideoPosterFrameGenerator *posterFrameGenerator;
@property (readonly) HMICameraVideoFrameSelector *frameSelector;
@property (readonly) HMICameraVideoAssetReader *assetReader;
@property (readonly) HMICameraVideoAnalyzer *analyzer;
@property long long events;
@property (readonly) long long eventTypes;
@property (retain) NSMutableArray *videoFrameResults;
@property (readonly) NSArray *significantEvents;
@property (readonly) _Bool shouldSkipAnalysis;
@property (readonly) _Bool shouldFailAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;
+ (id)videoAnnotationScoresForFrameResult:(id)arg1;

- (void)cancel;
- (id)loadAttributesFromVideoFragment:(id)arg1;
- (void)selector:(id)arg1 maySelectFrame:(id)arg2;
- (id)initWithVideoFragment:(id)arg1 analyzer:(id)arg2 maxAnalysisFPS:(double)arg3;
- (void)addSignificantEvent:(id)arg1;
- (void)markForPrediction;
- (void)loadAttributes;
- (void)startAnalysis;
- (_Bool)startEncodingSessionWithError:(id *)arg1;
- (_Bool)startPosterFrameGeneratorWithInterval:(unsigned long long)arg1 frameHeight:(unsigned long long)arg2;
- (_Bool)startAssetReaderWithWorkQueue:(id)arg1 logIdentifier:(id)arg2;
- (_Bool)startFrameSelector;
- (id)finishEncoderSession;
- (id)makeDidAnalyzeResult;
- (id)makeDidNotAnalyzeResultWithResultCode:(long long)arg1;

@end
