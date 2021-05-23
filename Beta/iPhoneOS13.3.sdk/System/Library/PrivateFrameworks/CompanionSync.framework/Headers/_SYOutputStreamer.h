/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSMutableArray, NSString, SYCompressedFileOutputStream;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _SYOutputStreamer : NSObject

{
    SYCompressedFileOutputStream *_stream;
    NSMutableArray *_items;
    CDUnknownBlockType _onComplete;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _hasWrittenData;
}

@property (nonatomic, readonly) _Bool hasWrittenData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)close;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_tryToSendData;
- (void)_completeAllItemsWithError:(id)arg1;
- (CDUnknownBlockType)_getCompletionBlock;
- (void)setStreamProperty:(id)arg1 forKey:(id)arg2;
- (id)streamPropertyForKey:(id)arg1;
- (id)initWithCompressedFileURL:(id)arg1 callbackQueue:(id)arg2;
- (void)whenComplete:(CDUnknownBlockType)arg1;

@end
