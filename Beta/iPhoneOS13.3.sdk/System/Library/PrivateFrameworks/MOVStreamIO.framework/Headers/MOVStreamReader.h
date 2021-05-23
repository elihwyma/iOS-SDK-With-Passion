/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <Foundation/NSObject.h>

@class AVAssetReader, AVURLAsset;

@protocol MOVStreamReaderDelegate;

@interface MOVStreamReader : NSObject

{
    AVURLAsset *m_asset;
    AVAssetReader *m_assetReader;
    struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData>>> m_streamDataMap;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> m_orderedStreamNames;
    struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData>>> m_metadataDataMap;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> m_orderedMetadataStreamNames;
    _Bool _l010OutputFormatRAW14L016;
    _Bool _rawBayerMSBReplication;
    id <MOVStreamReaderDelegate> _delegate;
}

@property _Bool l010OutputFormatRAW14L016;
@property _Bool rawBayerMSBReplication;
@property (retain) id <MOVStreamReaderDelegate> delegate;

- (void)dealloc;
- (double)duration;
- (id).cxx_construct;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)getAllStreams;
- (id)getAllMetadataStreams;
- (struct CGSize)getSizeForStream:(id)arg1;
- (_Bool)resetReaderTo:(CDStruct_198678f7)arg1 error:(id *)arg2;
- (struct __CVBuffer *)copyNextFrameForStream:(id)arg1 timestamp:(CDStruct_198678f7 *)arg2 error:(id *)arg3;
- (id)grabNextMetadataOfStream:(id)arg1 timeRange:(CDStruct_3c1748cc *)arg2;
- (double)getFrameRateForStream:(id)arg1;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)metadataForMovie;
- (id)grabNextMetadataOfStream:(id)arg1 timeRange:(CDStruct_3c1748cc *)arg2 error:(id *)arg3;
- (int)playbackPixelFormatForTrack:(id)arg1 ofStream:(id)arg2 delegate:(id)arg3;
- (id)streamIdFromTrackStreamTypeIdentifier:(id)arg1;
- (int)playbackPixelFormatForTrack:(id)arg1 ofStream:(id)arg2 streamEncodingType:(id)arg3 inputPixelFormat:(unsigned int)arg4 delegate:(id)arg5;
- (id)findAllAssociatedMetadataTrackInAsset:(id)arg1 forTrack:(id)arg2;
- (id)getKeyFromMetadataTrack:(id)arg1;
- (_Bool)containsStream:(id)arg1;
- (_Bool)containsMetadataStream:(id)arg1;
- (_Bool)resetReader:(id *)arg1;
- (struct CGAffineTransform)transformForStream:(id)arg1;
- (id)movstreamIOMetadataForMovie;
- (id)getRelatedStreamForStreamId:(id)arg1;
- (id)getRelationSpecifierForStreamId:(id)arg1;
- (id)getStreamsRelatedToStream:(id)arg1;
- (id)trackMetadataForStream:(id)arg1;
- (id)trackForStream:(id)arg1;
- (CDStruct_198678f7)getMinFrameDurationForStream:(id)arg1;
- (unsigned int)pixelFormatForStream:(id)arg1;
- (id)getUnknownMetadataStreamsAssociatedTo:(id)arg1;
- (id)grabNextMetadataItemsOfTrackAssociatedWith:(id)arg1 withIdentifier:(id)arg2 timeRange:(CDStruct_3c1748cc *)arg3 error:(id *)arg4;
- (_Bool)endOfStream;
- (_Bool)hasFinishedReading;
- (_Bool)hasReachedEndOfStream:(id)arg1;
- (_Bool)hasReachedEndOfMetadataStream:(id)arg1;
- (id)findAssociatedMetadataTrackInAsset:(id)arg1 forTrack:(id)arg2 forKey:(id)arg3;

@end
