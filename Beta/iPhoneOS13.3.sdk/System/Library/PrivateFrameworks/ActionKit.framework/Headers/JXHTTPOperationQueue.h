/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSOperationQueue.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSNumber, NSObject, NSString;

@protocol JXHTTPOperationQueueDelegate, OS_dispatch_queue;

@interface JXHTTPOperationQueue : NSOperationQueue

{
    _Bool _performsBlocksOnMainQueue;
    NSObject<JXHTTPOperationQueueDelegate> *_delegate;
    NSString *_uniqueString;
    NSNumber *_downloadProgress;
    NSNumber *_uploadProgress;
    NSNumber *_bytesDownloaded;
    NSNumber *_bytesUploaded;
    NSNumber *_expectedDownloadBytes;
    NSNumber *_expectedUploadBytes;
    NSDate *_startDate;
    NSDate *_finishDate;
    CDUnknownBlockType _willStartBlock;
    CDUnknownBlockType _willFinishBlock;
    CDUnknownBlockType _didStartBlock;
    CDUnknownBlockType _didUploadBlock;
    CDUnknownBlockType _didDownloadBlock;
    CDUnknownBlockType _didMakeProgressBlock;
    CDUnknownBlockType _didFinishBlock;
    NSMutableDictionary *_bytesDownloadedPerOperation;
    NSMutableDictionary *_bytesUploadedPerOperation;
    NSMutableDictionary *_expectedDownloadBytesPerOperation;
    NSMutableDictionary *_expectedUploadBytesPerOperation;
    NSMutableSet *_observedOperationSet;
    NSObject<OS_dispatch_queue> *_observationQueue;
    NSObject<OS_dispatch_queue> *_progressQueue;
    NSObject<OS_dispatch_queue> *_blockQueue;
}

@property (retain) NSMutableDictionary *bytesDownloadedPerOperation;
@property (retain) NSMutableDictionary *bytesUploadedPerOperation;
@property (retain) NSMutableDictionary *expectedDownloadBytesPerOperation;
@property (retain) NSMutableDictionary *expectedUploadBytesPerOperation;
@property (retain) NSDate *startDate;
@property (retain) NSDate *finishDate;
@property (retain) NSString *uniqueString;
@property (retain) NSNumber *downloadProgress;
@property (retain) NSNumber *uploadProgress;
@property (retain) NSNumber *bytesDownloaded;
@property (retain) NSNumber *bytesUploaded;
@property (retain) NSNumber *expectedDownloadBytes;
@property (retain) NSNumber *expectedUploadBytes;
@property (retain) NSMutableSet *observedOperationSet;
@property (retain) NSObject<OS_dispatch_queue> *observationQueue;
@property (retain) NSObject<OS_dispatch_queue> *progressQueue;
@property (retain) NSObject<OS_dispatch_queue> *blockQueue;
@property (weak) NSObject<JXHTTPOperationQueueDelegate> *delegate;
@property (readonly) double elapsedSeconds;
@property _Bool performsBlocksOnMainQueue;
@property (copy) CDUnknownBlockType willStartBlock;
@property (copy) CDUnknownBlockType willFinishBlock;
@property (copy) CDUnknownBlockType didStartBlock;
@property (copy) CDUnknownBlockType didUploadBlock;
@property (copy) CDUnknownBlockType didDownloadBlock;
@property (copy) CDUnknownBlockType didMakeProgressBlock;
@property (copy) CDUnknownBlockType didFinishBlock;

+ (id)sharedQueue;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)performDelegateMethod:(SEL)arg1;
- (CDUnknownBlockType)blockForSelector:(SEL)arg1;

@end
