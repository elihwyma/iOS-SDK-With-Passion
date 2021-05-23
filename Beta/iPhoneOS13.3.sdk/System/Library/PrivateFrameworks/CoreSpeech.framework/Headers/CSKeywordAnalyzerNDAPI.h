/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSNovDetector;

@protocol CSKeywordAnalyzerNDAPIScoreDelegate;

@interface CSKeywordAnalyzerNDAPI : NSObject

{
    CSNovDetector *_novDetector;
    unsigned long long _startAnalyzeSampleCount;
    _Bool _isStartSampleCountMarked;
    unsigned long long _lastSampleFed;
    unsigned long long _sampleFedWrapAroundOffset;
    unsigned int _activePhraseId;
    unsigned long long _activeChannel;
    id <CSKeywordAnalyzerNDAPIScoreDelegate> _delegate;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) unsigned int activePhraseId;
@property (weak, nonatomic) id <CSKeywordAnalyzerNDAPIScoreDelegate> delegate;

- (void)reset;
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;
- (void)resetBest;
- (id)getAnalyzedResult;
- (void)_resetStartAnalyzeTime;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (float)getRejectLoggingThreshold;
- (void)processAudioChunk:(id)arg1;
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;
- (float)getThreshold;
- (float)getLoggingThreshold;

@end
