/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <Foundation/NSObject.h>

@class AVAssetWriter, NSArray, NSError, NSString, NSURL;

@protocol MOVStreamWriterDelegate, MOVStreamWriterState, OS_dispatch_queue;

@interface MOVStreamWriter : NSObject

{
    NSObject<OS_dispatch_queue> *m_delegateCallbackQueue;
    NSObject<OS_dispatch_queue> *m_writingQueue;
    NSObject<OS_dispatch_queue> *m_processingQueue;
    NSObject<OS_dispatch_queue> *m_finishingQueue;
    NSURL *m_writeURL;
    AVAssetWriter *m_assetWriter;
    double m_expectedFrameRate;
    _Bool m_realtime;
    _Bool m_haveStartedSession;
    struct CGAffineTransform m_videoTransform;
    map_d85c7ab5 m_streamDataMap;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> m_orderedStreamNames;
    struct map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>> m_metadataDataMap;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> m_orderedMetadataStreamNames;
    struct map<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>>>>> m_associatedMetadataDataMap;
    struct map<std::__1::basic_string<char>, CMTime, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, CMTime>>> m_lastPtsForStream;
    _Bool m_observingIsReady;
    id <MOVStreamWriterState> _state;
    NSArray *movMetadataItems;
    NSError *criticalError;
    unsigned long long _fifoBufferCapacity;
    id <MOVStreamWriterDelegate> _delegate;
}

@property (weak) id <MOVStreamWriterDelegate> delegate;
@property (retain) id <MOVStreamWriterState> state;
@property unsigned long long fifoBufferCapacity;
@property (readonly) long long status;
@property (retain) NSError *criticalError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) NSArray *movMetadataItems;

+ (id)getMOVStreamIOMetadataItem;
+ (unsigned int)getPixelFormatFromStreamData:(struct StreamRecordingData *)arg1;
+ (int)currentBayerRearrangeStrategy;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id).cxx_construct;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;
- (void)prepareToRecord;
- (void)cancelRecording;
- (void)finishRecording;
- (void)addTrackForStreamWithIdentifier:(id)arg1 formatDescription:(const struct opaqueCMFormatDescription *)arg2 recordingConfiguration:(id)arg3;
- (void)appendAudioBuffer:(struct opaqueCMSampleBuffer *)arg1 forStream:(id)arg2;
- (void)appendMetadata:(id)arg1 withTimeStamp:(CDStruct_198678f7)arg2 toStream:(id)arg3;
- (id)initWithURL:(id)arg1 andExpectedFrameRate:(double)arg2;
- (void)addMetadataTrack:(id)arg1;
- (void)appendPixelBuffer:(struct __CVBuffer *)arg1 presentationTime:(CDStruct_198678f7)arg2 toStreamId:(id)arg3;
- (void)prepareToRecordWithMovieMetadata:(id)arg1;
- (void)processFinishRecording;
- (void)writerStatusChanged:(long long)arg1 writerDelegate:(id)arg2 delegateCallbackQueue:(id)arg3;
- (_Bool)activateNewState:(id)arg1;
- (void)removeIsReadyObservers;
- (void)informDelegateAboutError:(id)arg1;
- (void)writeMetadata:(id)arg1 forStreamId:(id)arg2;
- (id)finishingQueue;
- (_Bool)checkIfFifoAreEmpty;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 andMetadata:(id)arg2 forStreamId:(id)arg3;
- (void)setupAssetWriterStreamInputsWithError:(id *)arg1;
- (void)setupMetadataInputsWithError:(id *)arg1;
- (void)setupAssociatedMetadataInputsWithError:(id *)arg1;
- (void)addIsReadyObservers;
- (int)attachmentSerializationModeForStream:(basic_string_7c0a1c0b)arg1 withDefaultMode:(int)arg2 fromMap:(map_d85c7ab5 *)arg3;
- (id)getMetadataGroupForBuffer:(struct __CVBuffer *)arg1 stream:(id)arg2 presentationTime:(CDStruct_198678f7)arg3 serializationMode:(int)arg4;
- (void)asyncWriteSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 stream:(id)arg2 metadata:(id)arg3;
- (void)asyncWriteMetadata:(id)arg1 streamKey:(basic_string_7c0a1c0b)arg2;
- (void)asyncWriteAssociatedMetadata:(id)arg1 metadataKey:(basic_string_7c0a1c0b)arg2 associatedStreamKey:(basic_string_7c0a1c0b)arg3;
- (id)getAudioMetadataForBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)clearAllFifoQueues;
- (void)finishAVWriter;
- (_Bool)isReadyForMoreDataForStreamId:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (unsigned long long)applyBitrateModifiersTo:(unsigned long long)arg1;
- (double)getExpectedFrameRateForStream:(id)arg1;
- (int)encoderTypeForStream:(id)arg1;
- (unsigned long long)getBitsPerSecondForColorStream:(id)arg1 dimensions:(CDStruct_1ef3fb1f)arg2;
- (id)getWriterSettingsForStream:(id)arg1 description:(struct opaqueCMFormatDescription *)arg2;
- (struct CGAffineTransform)getVideoTransformForStream:(id)arg1;
- (id)getTrackMetadataForStream:(id)arg1;
- (id)getTrackEncodingMetadataForStream:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (id)getTrackInputPixelFormatMetadataForStream:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (id)getTrackEncodedPixelFormatMetadataForStream:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (id)getTrackMetadataForAttachmentsSerializationMode:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (id)createRelatedToStreamMetadata:(id)arg1;
- (id)createRelationSpecifierMetadata:(id)arg1;
- (id)customTrackMetadataForStream:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (_Bool)marksOutputTracksAsEnabledForStream:(basic_string_7c0a1c0b)arg1 fromMap:(map_d85c7ab5 *)arg2;
- (const struct opaqueCMFormatDescription *)createMetadataFormatDescription:(id)arg1;
- (void)encoder:(id)arg1 encodedSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 metadata:(id)arg3 presentationTime:(CDStruct_198678f7)arg4 streamId:(id)arg5;
- (void)encoder:(id)arg1 encodingFailedForStream:(id)arg2;
- (void)executePrepareToRecordWithMovieMetadata:(id)arg1;
- (void)finishAndDrainFifoFirst;
- (void)deleteMOVFile;
- (void)deleteFileOnCancel;
- (void)processCancelRecording;
- (void)processForceFinishRecording;
- (_Bool)setExpectedFrameRate:(double)arg1;
- (_Bool)setVideoTransform:(struct CGAffineTransform)arg1;
- (_Bool)setVideoTransformFromOrientation:(int)arg1;
- (_Bool)relateStream:(id)arg1 toStream:(id)arg2 relationSpecifier:(id)arg3;
- (_Bool)setRealTimeCapture:(_Bool)arg1;
- (void)addMetadataTrackAssociatedWith:(id)arg1 withIdentifier:(id)arg2 withFormatDescription:(struct opaqueCMFormatDescription *)arg3;
- (void)addTrackForStreamWithIdentifier:(id)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 encoderConfig:(id)arg3;
- (_Bool)setTrackMetadata:(id)arg1 forStream:(id)arg2;
- (int)attachmentSerializationModeForStream:(basic_string_7c0a1c0b)arg1 withDefaultMode:(int)arg2;
- (_Bool)marksOutputTracksAsEnabledForStream:(basic_string_7c0a1c0b)arg1;
- (void)appendMetadata:(id)arg1 associatedWith:(id)arg2 toStream:(id)arg3;
- (void)forceFinishRecording;
- (unsigned long long)fifoBufferSizeForStream:(id)arg1;
- (unsigned int)getPixelFormatForStream:(id)arg1 fromMap:(map_d85c7ab5 *)arg2;

@end
