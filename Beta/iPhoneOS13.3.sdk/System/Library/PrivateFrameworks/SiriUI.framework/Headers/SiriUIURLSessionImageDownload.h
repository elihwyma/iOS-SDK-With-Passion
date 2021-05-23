/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class NSMutableData, UIColor;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SiriUIURLSessionImageDownload : NSObject

{
    struct CGSize _fitToSize;
    NSMutableData *_downloadedData;
    CDUnknownBlockType _progressHandler;
    id _client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_renderTimer;
    _Bool _newDataAvailableToRender;
    struct CGImageSource *_imageSource;
    unsigned long long _lastUpdatedLength;
    _Bool _finished;
    _Bool _hasSentFinished;
    UIColor *_backgroundFillColor;
}

- (void)dealloc;
- (void)_updateImageFromURL:(id)arg1 error:(id)arg2;
- (id)initWithFitToSize:(struct CGSize)arg1 progressHandler:(CDUnknownBlockType)arg2 incremental:(_Bool)arg3 client:(id)arg4 fillColor:(id)arg5;
- (void)appendDownloadedData:(id)arg1 fromURL:(id)arg2;
- (void)finishedFromURL:(id)arg1 error:(id)arg2;

@end
