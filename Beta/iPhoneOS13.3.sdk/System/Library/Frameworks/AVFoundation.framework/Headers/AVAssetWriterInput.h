/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetWriterInputHelper, AVAssetWriterInputInternal, AVOutputSettings, AVWeakReference, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInput : NSObject

{
    AVAssetWriterInputInternal *_internal;
}

@property (readonly) long long numberOfAppendFailures;
@property (readonly, getter=_markAsFinishedCalled) _Bool markAsFinishedCalled;
@property (retain, nonatomic, getter=_helper, setter=_setHelper:) AVAssetWriterInputHelper *helper;
@property (copy, nonatomic, getter=_sourcePixelBufferAttributes, setter=_setSourcePixelBufferAttributes:) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, readonly, getter=_pixelBufferPool) struct __CVPixelBufferPool *pixelBufferPool;
@property (nonatomic, readonly, getter=_outputSettingsObject) AVOutputSettings *outputSettingsObject;
@property (nonatomic, readonly, getter=_status) long long status;
@property (nonatomic, readonly, getter=_isAttachedToAdaptor) _Bool attachedToAdaptor;
@property (retain, nonatomic, getter=_weakReferenceToAssetWriter, setter=_setWeakReferenceToAssetWriter:) AVWeakReference *weakReferenceToAssetWriter;
@property (nonatomic, getter=_alternateGroupID, setter=_setAlternateGroupID:) short alternateGroupID;
@property (nonatomic, getter=_provisionalAlternateGroupID, setter=_setProvisionalAlternateGroupID:) short provisionalAlternateGroupID;
@property (nonatomic, readonly, getter=_trackReferences) NSDictionary *trackReferences;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) NSDictionary *outputSettings;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription *sourceFormatHint;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic, readonly, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;
@property (nonatomic) _Bool expectsMediaDataInRealTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;

- (id)init;
- (void)dealloc;
- (id)languageCode;
- (struct CGAffineTransform)transform;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (long long)layer;
- (void)setLayer:(long long)arg1;
- (void)setLanguageCode:(id)arg1;
- (struct CGSize)naturalSize;
- (id)extendedLanguageTag;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;
- (_Bool)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)markAsFinished;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (float)preferredVolume;
- (void)_setAttachedAdaptor:(id)arg1;
- (id)availableTrackAssociationTypes;
- (void)setNaturalSize:(struct CGSize)arg1;
- (void)setPreferredVolume:(float)arg1;
- (_Bool)maximizePowerEfficiency;
- (void)setMaximizePowerEfficiency:(_Bool)arg1;
- (id)_attachedAdaptor;
- (void)setMarksOutputTrackAsEnabled:(_Bool)arg1;
- (_Bool)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaFileType:(id)arg2 error:(id *)arg3;
- (int)outputTrackID;
- (void)_didStartInitialSession;
- (void)_prepareToEndSession;
- (_Bool)_prepareToFinishWritingReturningError:(id *)arg1;
- (void)_transitionToTerminalStatus:(long long)arg1;
- (_Bool)marksOutputTrackAsEnabled;
- (int)mediaTimeScale;
- (void)setMediaTimeScale:(int)arg1;
- (_Bool)performsMultiPassEncodingIfSupported;
- (void)setPerformsMultiPassEncodingIfSupported:(_Bool)arg1;
- (CDStruct_1b6d18a9)preferredMediaChunkDuration;
- (void)setPreferredMediaChunkDuration:(CDStruct_1b6d18a9)arg1;
- (long long)preferredMediaChunkAlignment;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (long long)preferredMediaChunkSize;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (id)mediaDataLocation;
- (void)setMediaDataLocation:(id)arg1;
- (id)sampleReferenceBaseURL;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (_Bool)canPerformMultiplePasses;
- (id)currentPassDescription;
- (long long)_appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1;
- (void)markCurrentPassAsFinished;
- (_Bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (id)associatedInputsWithTrackAssociationType:(id)arg1;
- (_Bool)writesMediaDataToBeginningOfFile;
- (void)setWritesMediaDataToBeginningOfFile:(_Bool)arg1;
- (void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;

@end
