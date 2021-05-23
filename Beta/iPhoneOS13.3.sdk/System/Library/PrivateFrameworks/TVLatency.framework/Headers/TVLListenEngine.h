/*
 Image: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
 */

#import <Foundation/NSObject.h>

@class AVAudioEngine, AVAudioFile, AVAudioInputNode, AVAudioPlayerNode, AVAudioUnit, NSDate, NSMutableArray, NSString, SNAudioStreamAnalyzer, SNEstimateAudioOffsetRequest;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface TVLListenEngine : NSObject

{
    _Bool _lastObservationWasConfident;
    _Bool _didMissDeadline;
    AVAudioEngine *_audioEngine;
    AVAudioInputNode *_microphone;
    AVAudioPlayerNode *_player;
    AVAudioUnit *_mixer;
    SNEstimateAudioOffsetRequest *_estimateAudioOffsetRequest;
    SNAudioStreamAnalyzer *_streamAnalyzer;
    CDUnknownBlockType _callback;
    CDUnknownBlockType _completion;
    AVAudioFile *_file;
    NSMutableArray *_confidentResults;
    long long _convergenceLossCount;
    NSDate *_firstObservationDate;
    double _timeToConverge;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_analysisQueue;
}

@property (retain, nonatomic) AVAudioEngine *audioEngine;
@property (retain, nonatomic) AVAudioInputNode *microphone;
@property (retain, nonatomic) AVAudioPlayerNode *player;
@property (retain, nonatomic) AVAudioUnit *mixer;
@property (retain, nonatomic) SNEstimateAudioOffsetRequest *estimateAudioOffsetRequest;
@property (retain, nonatomic) SNAudioStreamAnalyzer *streamAnalyzer;
@property (copy, nonatomic) CDUnknownBlockType callback;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) AVAudioFile *file;
@property (retain, nonatomic) NSMutableArray *confidentResults;
@property (nonatomic) long long convergenceLossCount;
@property (retain, nonatomic) NSDate *firstObservationDate;
@property (nonatomic) double timeToConverge;
@property (nonatomic) _Bool lastObservationWasConfident;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analysisQueue;
@property (nonatomic) _Bool didMissDeadline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)invalidate;
+ (void)engineWithCompletion:(CDUnknownBlockType)arg1;

- (id)init;
- (void)invalidate;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (void)requestDidComplete:(id)arg1;
- (void)completeAnalysis;
- (_Bool)startListeningWithReferenceTone:(id)arg1 at:(unsigned long long)arg2 saveToFile:(id)arg3 withCallback:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_setupAndStartAudioSessionWithError:(id *)arg1;
- (_Bool)_setupAndStartAudioEngineGraphWithTimeout:(double)arg1 error:(id *)arg2;
- (void)_handleIterruption:(id)arg1;
- (void)_splitMicrophoneAndReferenceToneChannels;
- (double)medianOfSortedArray:(id)arg1;

@end
