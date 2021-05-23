/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class AVAssetReaderOutput, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;

@protocol OS_dispatch_queue;

@interface PFRWSampleBufferChannel : NSObject

{
    CDUnknownBlockType completionHandler;
    NSObject<OS_dispatch_queue> *serializationQueue;
    _Bool _useAdaptor;
    _Bool _finished;
    AVAssetWriterInput *_assetWriterInput;
    AVAssetReaderOutput *_assetReaderOutput;
    AVAssetWriterInputPixelBufferAdaptor *_adaptor;
}

@property (nonatomic) _Bool useAdaptor;
@property (nonatomic) _Bool finished;
@property (retain, nonatomic) AVAssetWriterInput *assetWriterInput;
@property (retain, nonatomic) AVAssetReaderOutput *assetReaderOutput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *adaptor;

- (id)init;
- (void)cancel;
- (id)initWithAssetReaderOutput:(id)arg1 assetWriterInput:(id)arg2 useAdaptor:(_Bool)arg3;
- (void)callCompletionHandlerIfNecessary;
- (void)startWithDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
