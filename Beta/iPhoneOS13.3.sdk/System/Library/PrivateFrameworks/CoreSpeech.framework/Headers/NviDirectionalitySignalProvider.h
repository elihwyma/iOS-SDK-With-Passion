/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSString, NviAudioFileWriter, NviContext, NviDataLogger, NviDirectionalitySignalData, SNAudioStreamAnalyzer;

@protocol NviAssetsProvider, NviAudioDataSource, OS_dispatch_queue;

@interface NviDirectionalitySignalProvider : NSObject

{
    _Bool _doneProcessing;
    float _dirAzimuthEMAParam;
    float _currEstimatedAzimuth;
    id <NviAudioDataSource> _dataSrc;
    id <NviAssetsProvider> _assetsProvider;
    NviContext *_nviCtx;
    NSHashTable *_delegates;
    SNAudioStreamAnalyzer *_snAudioStreamAnalyzer;
    long long _currReqFirstSampleId;
    unsigned long long _currNumSamplesProcessed;
    NviDirectionalitySignalData *_dirSigData;
    NviDataLogger *_sigDataWriter;
    NviAudioFileWriter *_audioFileWriter;
    NSMutableDictionary *_azDistribution;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) id <NviAudioDataSource> dataSrc;
@property (retain, nonatomic) id <NviAssetsProvider> assetsProvider;
@property (retain, nonatomic) NviContext *nviCtx;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) SNAudioStreamAnalyzer *snAudioStreamAnalyzer;
@property (nonatomic) float dirAzimuthEMAParam;
@property (nonatomic) long long currReqFirstSampleId;
@property (nonatomic) unsigned long long currNumSamplesProcessed;
@property (nonatomic) float currEstimatedAzimuth;
@property (retain, nonatomic) NviDirectionalitySignalData *dirSigData;
@property (retain, nonatomic) NviDataLogger *sigDataWriter;
@property (nonatomic) _Bool doneProcessing;
@property (retain, nonatomic) NviAudioFileWriter *audioFileWriter;
@property (retain, nonatomic) NSMutableDictionary *azDistribution;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool receiveOnlyProcessedChannelData;
@property (nonatomic, readonly) unsigned long long sigType;

- (void)dealloc;
- (void)reset;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (void)audioChunkAvailable:(id)arg1 numChannels:(unsigned long long)arg2 numSamplesPerChannel:(unsigned long long)arg3 startSampleId:(unsigned long long)arg4 atAbsMachTimestamp:(unsigned long long)arg5;
- (id)initWithDataSource:(id)arg1 assetsProvider:(id)arg2;
- (void)startWithNviContext:(id)arg1 didStartHandler:(CDUnknownBlockType)arg2;
- (void)stopWithDidStopHandler:(CDUnknownBlockType)arg1;

@end
