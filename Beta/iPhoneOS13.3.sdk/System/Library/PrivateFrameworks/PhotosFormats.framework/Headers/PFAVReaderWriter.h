/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetReader, AVAssetWriter, AVAssetWriterInput, NSArray, NSString, NSURL;

@protocol OS_dispatch_queue, PFAVReaderWriterAdjustDelegate;

@interface PFAVReaderWriter : NSObject

{
    NSObject<OS_dispatch_queue> *_serializationQueue;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    AVAssetReader *assetReader;
    AVAssetWriter *assetWriter;
    NSArray *videoChannels;
    NSArray *passthroughChannels;
    _Bool cancelled;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    _Bool _writeInProgress;
    CDStruct_1b6d18a9 _stillImagetime;
    id <PFAVReaderWriterAdjustDelegate> _delegate;
    AVAsset *_asset;
    AVAssetWriterInput *_metadataInput;
    NSURL *_outputURL;
    CDStruct_e83c9415 _timeRange;
}

@property (copy, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVAssetWriterInput *metadataInput;
@property (nonatomic) CDStruct_e83c9415 timeRange;
@property (copy, nonatomic) NSURL *outputURL;
@property (weak, nonatomic) id <PFAVReaderWriterAdjustDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (id)initWithAsset:(id)arg1;
- (void)writeToURL:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAsset:(id)arg1 stillImageTime:(CDStruct_1b6d18a9)arg2;
- (void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 andMadeWriteSampleBuffer:(struct __CVBuffer *)arg3;
- (void)_didLoadAVAssetValues;
- (_Bool)setUpReaderAndWriterReturningError:(id *)arg1;
- (_Bool)startReadingAndWritingReturningError:(id *)arg1;
- (void)readingAndWritingDidFinishSuccessfully:(_Bool)arg1 withError:(id)arg2;

@end
