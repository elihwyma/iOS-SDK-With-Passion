/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class AVAssetReader, AVAssetReaderOutputMetadataAdaptor, AVAssetReaderTrackOutput;

@interface VCPMetaTrackDecoder : NSObject

{
    AVAssetReader *_reader;
    AVAssetReaderTrackOutput *_readerOutput;
    AVAssetReaderOutputMetadataAdaptor *_readerOutputAdaptor;
}

- (void)dealloc;
- (long long)status;
- (id)initWithTrack:(id)arg1;
- (id)copyNextMetadataGroup;

@end
