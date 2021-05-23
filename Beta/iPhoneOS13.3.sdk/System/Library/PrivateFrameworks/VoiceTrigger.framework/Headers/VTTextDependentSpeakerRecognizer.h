/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class EARPSRAudioProcessor, NSData, NSMutableData, NSString;

@protocol OS_dispatch_queue, VTTextDependentSpeakerRecognizerDelegate;

@interface VTTextDependentSpeakerRecognizer : NSObject

{
    void *_novDetect;
    _Bool _isTdPsrAbleToProcess;
    float _lastRequestSatScore;
    NSString *_tdSATModelFilePath;
    EARPSRAudioProcessor *_speakerVectorGenerator;
    id <VTTextDependentSpeakerRecognizerDelegate> _delegate;
    NSString *_resourcePath;
    NSString *_satDirectory;
    NSString *_tdSATModelDirPath;
    NSString *_assetHash;
    NSData *_speakerVector;
    unsigned long long _numSamplesProecssed;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_stateSerialQueue;
    NSMutableData *_psrAudioDataForLogging;
}

@property (retain, nonatomic) EARPSRAudioProcessor *speakerVectorGenerator;
@property (weak, nonatomic) id <VTTextDependentSpeakerRecognizerDelegate> delegate;
@property (retain, nonatomic) NSString *resourcePath;
@property (retain, nonatomic) NSString *satDirectory;
@property (retain, nonatomic) NSString *tdSATModelDirPath;
@property (retain, nonatomic) NSString *assetHash;
@property (retain, nonatomic) NSString *tdSATModelFilePath;
@property (nonatomic) _Bool tdPsrCanProcessRequest;
@property (nonatomic) float lastRequestSatScore;
@property (retain, nonatomic) NSData *speakerVector;
@property (nonatomic) unsigned long long numSamplesProecssed;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue;
@property (retain, nonatomic) NSMutableData *psrAudioDataForLogging;
@property (nonatomic, readonly) long long getSATVectorCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (void)_createDirectoryIfDoesNotExist:(id)arg1;
+ (_Bool)psrTdAssetExistsAtResourcePath:(id)arg1;

- (void)dealloc;
- (void)endAudio;
- (void)psrAudioProcessor:(id)arg1 hasResult:(id)arg2 numElements:(unsigned long long)arg3;
- (void)resetForNewRequest;
- (id)_getValueForNDAPIConfigOption:(id)arg1;
- (double)_getFloatValueForNDAPIConfigOption:(id)arg1 defaultValue:(double)arg2;
- (int)_getSATVectorCount;
- (id)initWithResourcePath:(id)arg1 satDirectory:(id)arg2 assetHash:(id)arg3 shouldCreateModelDir:(_Bool)arg4 delegate:(id)arg5;
- (double)getThresholdSAT;
- (double)getCombinationWeight;
- (void)processAudio:(const short *)arg1 numSamples:(unsigned long long)arg2;
- (void)updateSAT;
- (void)deleteExistingSATModel;
- (void)deleteVectorAtIndex:(int)arg1;
- (void)logWithAudioFilepath:(id)arg1;

@end
