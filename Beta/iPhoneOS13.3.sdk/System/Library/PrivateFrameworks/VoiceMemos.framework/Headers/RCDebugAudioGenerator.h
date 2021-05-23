/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL;

@protocol OS_dispatch_queue;

@interface RCDebugAudioGenerator : NSObject

{
    NSURL *_outputURL;
    double _duration;
    double _intervalBetweenPeaks;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _generateCompletionHandler;
    NSDictionary *_outputSettings;
    CDUnknownBlockType _curveFunction;
}

@property (nonatomic, readonly) CDUnknownBlockType generateCompletionHandler;
@property (nonatomic, readonly) NSDictionary *outputSettings;
@property (nonatomic, readonly) CDUnknownBlockType curveFunction;
@property (nonatomic, readonly) NSURL *outputURL;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double intervalBetweenPeaks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

+ (id)_defaultOutputSettings;
+ (CDUnknownBlockType)_defaultCurveFunction;

- (_Bool)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onBackgroundQueueGenerateAudio;
- (void)_onQueueGenerateFailedWithError:(id)arg1;
- (id)_generateLPCMAudioSamplesWithDuration:(double)arg1 curveFunction:(CDUnknownBlockType)arg2 samplesPerSecond:(double)arg3 intervalBetweenPeaks:(double)arg4;
- (void)_onQueueGenerateFinished;
- (id)initWithOutputURL:(id)arg1 duration:(double)arg2 intervalBetweenPeaks:(double)arg3;

@end
