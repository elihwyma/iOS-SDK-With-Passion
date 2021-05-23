/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSMutableArray, NSString, SYCompressedFileInputStream;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _SYInputStreamer : NSObject

{
    SYCompressedFileInputStream *_stream;
    NSMutableArray *_items;
    CDUnknownBlockType _onComplete;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)close;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_completeAllItemsWithError:(id)arg1;
- (void)setStreamProperty:(id)arg1 forKey:(id)arg2;
- (id)streamPropertyForKey:(id)arg1;
- (id)initWithCompressedFileURL:(id)arg1 callbackQueue:(id)arg2;
- (void)whenComplete:(CDUnknownBlockType)arg1;
- (void)_tryToReadData;
- (void)readDataOfLength:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
