/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWFormat, BWFormatRequirements, BWMemoryPool, BWNode, BWNodeConnection, BWNodeOutputMediaConfiguration, BWNodeOutputMediaProperties, BWPixelBufferPool, BWVideoFormat, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@protocol BWNodeOutputConsumer;

@interface BWNodeOutput : NSObject

{
    NSString *_name;
    id <BWNodeOutputConsumer> _consumer;
    _Bool _consumerIsANodeConnection;
    _Bool _mediaTypeIsVideo;
    unsigned int _mediaType;
    long long _configurationID;
    BWNode *_node;
    float _maxSampleDataOutputRate;
    _Bool _dropsSampleBuffersWithUnexpectedPTS;
    long long _liveConfigurationID;
    _Bool _discardsSampleData;
    unsigned int _numberOfBuffersEmitted;
    unsigned int _numberOfBuffersDropped;
    CDStruct_1b6d18a9 _lastValidPTS;
    CDStruct_1b6d18a9 _lastEmittedPTS;
    struct OpaqueFigSimpleMutex *_poolPreallocationMutex;
    NSMutableArray *_poolPreallocationCompletionHandlers;
    _Bool _poolPreallocationDone;
    _Bool _receivedEOD;
    BWNodeOutputMediaConfiguration *_primaryMediaConfiguration;
    BWNodeOutputMediaConfiguration *_unspecifiedAttachedMediaConfiguration;
    NSMutableDictionary *_attachedMediaConfigurations;
    BWNodeOutputMediaProperties *_primaryMediaProperties;
    NSMutableDictionary *_attachedMediaProperties;
    BWMemoryPool *_memoryPool;
}

@property (copy, nonatomic) BWFormatRequirements *formatRequirements;
@property (nonatomic) _Bool providesPixelBufferPool;
@property (nonatomic, readonly) BWPixelBufferPool *preparedPixelBufferPool;
@property (nonatomic) int passthroughMode;
@property (nonatomic) _Bool buffersOriginateUpstream;
@property (nonatomic) int indexOfInputWhichDrivesThisOutput;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic) int owningNodeRetainedBufferCount;
@property (copy, nonatomic) BWFormat *format;
@property (nonatomic, readonly) BWVideoFormat *videoFormat;
@property (nonatomic, readonly) BWFormat *liveFormat;
@property (nonatomic, readonly) BWPixelBufferPool *livePixelBufferPool;
@property (nonatomic, readonly) _Bool mediaTypeIsVideo;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) BWNode *node;
@property (nonatomic) id <BWNodeOutputConsumer> consumer;
@property (nonatomic, readonly) BWNodeConnection *connection;
@property (nonatomic) long long configurationID;
@property (nonatomic, readonly) BWNodeOutputMediaConfiguration *primaryMediaConfiguration;
@property (nonatomic, readonly) NSArray *specifiedAttachedMediaKeys;
@property (retain, nonatomic) BWNodeOutputMediaConfiguration *unspecifiedAttachedMediaConfiguration;
@property (nonatomic, readonly) BWNodeOutputMediaProperties *primaryMediaProperties;
@property (nonatomic, readonly) NSArray *resolvedAttachedMediaKeys;
@property (nonatomic) float maxSampleDataOutputRate;
@property (nonatomic) _Bool dropsSampleBuffersWithUnexpectedPTS;
@property (nonatomic, readonly) long long liveConfigurationID;
@property (nonatomic) _Bool discardsSampleData;
@property (nonatomic, readonly) unsigned int numberOfBuffersEmitted;
@property (nonatomic, readonly) unsigned int numberOfBuffersDropped;
@property (retain, nonatomic) BWMemoryPool *memoryPool;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithMediaType:(unsigned int)arg1 node:(id)arg2;
- (void)makeConfiguredFormatLive;
- (void)markEndOfLiveOutput;
- (void)emitSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setMediaConfiguration:(id)arg1 forAttachedMediaKey:(id)arg2;
- (id)mediaPropertiesForAttachedMediaKey:(id)arg1;
- (void)_setMediaProperties:(id)arg1 forAttachedMediaKey:(id)arg2;
- (void)emitNodeError:(id)arg1;
- (void)emitDroppedSample:(id)arg1;
- (id)mediaConfigurationForAttachedMediaKey:(id)arg1;
- (id)attachedMediaKeyDrivenByInputAttachedMediaKey:(id)arg1 inputIndex:(unsigned long long)arg2;
- (void)_setPrimaryProperties:(id)arg1;
- (void)_clearAllMediaProperties;
- (void)setLiveFormat:(id)arg1;
- (int)_passthroughModeForUnspecifiedAttachedMedia;
- (int)_passthroughModeForAttachedMediaKey:(id)arg1;
- (void)emitIrisReferenceMovieRequestWithInfo:(id)arg1;
- (void)emitStillImageReferenceFrameBracketedCaptureSequenceNumberMessageWithSequenceNumber:(int)arg1;
- (id)_poolName;
- (void)_prepareForConfiguredFormatToBecomeLiveForAttachedMediaKey:(id)arg1;
- (void)_makeConfiguredFormatLiveForAttachedMediaKey:(id)arg1;
- (void)_markEndOfLiveOutputForAttachedMediaKey:(id)arg1;
- (id)_mediaConfigurationForPossiblyUnspecifiedAttachedMediaKey:(id)arg1;
- (void)prepareForConfiguredFormatToBecomeLive;
- (void)emitStillImagePrewarmMessageWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3;
- (void)addPoolPreallocationCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_mediaConfigurationForBufferCountOfPossiblyUnspecifiedAttachedMediaKey:(id)arg1;
- (id)_mediaPropertiesForPossiblyUnspecifiedAttachedMediaKey:(id)arg1;
- (void)setNodePreparedPixelBufferPool:(id)arg1;
- (void)setPreparedSharedPixelBufferPool:(id)arg1;

@end
