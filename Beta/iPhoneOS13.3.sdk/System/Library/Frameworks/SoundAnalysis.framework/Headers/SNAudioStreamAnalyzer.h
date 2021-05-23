/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class AVAudioFormat, NSArray, NSMutableArray, NSString, SNAudioProcessorCache;

@protocol OS_dispatch_queue;

@interface SNAudioStreamAnalyzer : NSObject

{
    SNAudioProcessorCache *_processorCache;
    struct list<SoundAnalysis::ProcessingContext, std::__1::allocator<SoundAnalysis::ProcessingContext>> _processingContexts;
    struct ProcessingTree _processingTree;
    AVAudioFormat *_currentFormat;
    NSArray *_requests;
    NSMutableArray *_analyzerInfos;
    _Bool _shouldRebuildProcessingTree;
    _Bool _isInErrorState;
    NSObject<OS_dispatch_queue> *_analyzerQueue;
    _Bool _shouldProduceResults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double clientSampleRate;
@property (nonatomic, readonly) _Bool shouldProduceResults;

+ (void)validateFormatIsPCM:(id)arg1;

- (id)initWithFormat:(id)arg1;
- (id).cxx_construct;
- (id)detailedDescription;
- (void)removeRequest:(id)arg1;
- (void)removeAllRequests;
- (_Bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;
- (void)analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2;
- (void)_removeRequest:(id)arg1;
- (void)sendErrorToAllRequests:(id)arg1;
- (void)completeAnalysis;
- (long long)clientSampleTimeFromSampleTime:(long long)arg1 fromBox:(struct Box *)arg2;
- (void)updateProcessingTreeFormat:(id)arg1;
- (_Bool)_addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;
- (id)createAnalyzerInfoForRequest:(id)arg1 resultsObserver:(id)arg2;
- (_Bool)configureAnalyzer:(id)arg1 withFormat:(id)arg2;
- (void)removeAnalyzerInfoForRequest:(id)arg1;
- (_Bool)configureAnalysisTreeWithFormat:(id)arg1;
- (_Bool)updateTreeProcessingContexts;
- (void)_analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2;
- (void)enterErrorState:(id)arg1;
- (void)handleAnalyzeAudioBufferError;
- (id)analyzerInfoForRequest:(id)arg1;
- (void)analyzeAudioBufferList:(struct AudioBufferList *)arg1 withAudioFrameCount:(unsigned int)arg2 atAudioFramePosition:(long long)arg3;
- (void)writeDSPGraphDotFilesToDirectory:(id)arg1;

@end
