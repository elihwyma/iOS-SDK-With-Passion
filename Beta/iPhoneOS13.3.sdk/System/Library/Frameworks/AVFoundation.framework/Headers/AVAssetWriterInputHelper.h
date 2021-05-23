/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetWriterInputConfigurationState, AVAssetWriterInputPassDescription, AVOutputSettings, AVWeakReference, NSArray, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputHelper : NSObject

{
    AVAssetWriterInputConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriterInput;
}

@property (nonatomic, readonly) AVAssetWriterInputConfigurationState *configurationState;
@property (retain) AVWeakReference *weakReferenceToAssetWriterInput;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) int trackID;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) AVOutputSettings *outputSettings;
@property (nonatomic, readonly) struct opaqueCMFormatDescription *sourceFormatHint;
@property (nonatomic) struct CGAffineTransform transform;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) int mediaTimeScale;
@property (nonatomic, readonly, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;
@property (nonatomic) _Bool expectsMediaDataInRealTime;
@property (nonatomic) struct CGSize naturalSize;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (nonatomic) _Bool marksOutputTrackAsEnabled;
@property (nonatomic) float preferredVolume;
@property (nonatomic) long long layer;
@property (nonatomic) short alternateGroupID;
@property (nonatomic) short provisionalAlternateGroupID;
@property (nonatomic, readonly) NSDictionary *trackReferences;
@property (nonatomic) _Bool performsMultiPassEncodingIfSupported;
@property (nonatomic, readonly) _Bool canPerformMultiplePasses;
@property (nonatomic, readonly) AVAssetWriterInputPassDescription *currentPassDescription;
@property (nonatomic, readonly) _Bool shouldRespondToInitialPassDescription;
@property (nonatomic) CDStruct_1b6d18a9 preferredMediaChunkDuration;
@property (nonatomic) long long preferredMediaChunkAlignment;
@property (nonatomic) long long preferredMediaChunkSize;
@property (copy, nonatomic) NSString *mediaDataLocation;
@property (copy, nonatomic) NSURL *sampleReferenceBaseURL;
@property (nonatomic) _Bool maximizePowerEfficiency;
@property (copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, readonly) struct __CVPixelBufferPool *pixelBufferPool;

- (void)dealloc;
- (id)description;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)markAsFinished;
- (id)availableTrackAssociationTypes;
- (id)initWithConfigurationState:(id)arg1;
- (void)didStartInitialSession;
- (void)prepareToEndSession;
- (_Bool)prepareToFinishWritingReturningError:(id *)arg1;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;
- (_Bool)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg1;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)markCurrentPassAsFinished;
- (_Bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (id)associatedInputsWithTrackAssociationType:(id)arg1;
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1;

@end
