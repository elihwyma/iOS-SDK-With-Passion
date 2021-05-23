/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetWriterConfigurationState, AVMediaFileType, AVWeakReference, NSArray, NSError, NSURL;

@protocol AVAssetWriterDelegate;

__attribute__((visibility("hidden")))
@interface AVAssetWriterHelper : NSObject

{
    AVAssetWriterConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriter;
}

@property (nonatomic, readonly) AVAssetWriterConfigurationState *configurationState;
@property (retain) AVWeakReference *weakReferenceToAssetWriter;
@property (nonatomic, readonly) NSURL *outputURL;
@property (nonatomic, readonly) AVMediaFileType *mediaFileType;
@property (nonatomic, readonly) NSArray *availableMediaTypes;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSError *error;
@property (weak) id <AVAssetWriterDelegate> delegate;
@property (nonatomic) CDStruct_1b6d18a9 movieFragmentInterval;
@property (nonatomic) CDStruct_1b6d18a9 overallDurationHint;
@property (nonatomic) _Bool shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property (nonatomic) int movieTimeScale;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) struct CGAffineTransform preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) float preferredRate;
@property (nonatomic) long long singlePassFileSize;
@property (nonatomic) long long singlePassMediaDataSize;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) NSArray *inputGroups;

- (id)init;
- (void)dealloc;
- (void)finishWriting;
- (void)flush;
- (_Bool)canAddInput:(id)arg1;
- (void)addInput:(id)arg1;
- (void)startWriting;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (_Bool)canAddInputGroup:(id)arg1;
- (void)addInputGroup:(id)arg1;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)cancelWriting;
- (void)transitionToFailedStatusWithError:(id)arg1;
- (id)initWithConfigurationState:(id)arg1;
- (_Bool)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(struct opaqueCMFormatDescription *)arg3 exceptionReason:(id *)arg4;
- (_Bool)_canApplyTrackReferences:(id)arg1 exceptionReason:(id *)arg2;
- (_Bool)_transitionToClientInitiatedTerminalStatus:(long long)arg1;

@end
