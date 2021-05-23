/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSDictionary, NSInputStream, NSMutableDictionary, NSNumber, NSOutputStream, NSString;

@protocol OS_dispatch_queue;

@interface _IDSDeviceConnection : NSObject

{
    NSString *_nsuuid;
    _Bool _isDefaultPairedDevice;
    NSString *_service;
    NSString *_streamName;
    NSString *_serviceToken;
    NSString *_connectionUUID;
    int _socket;
    unsigned long long _mtu;
    CDUnknownBlockType _openSocketCompletionHandler;
    NSObject<OS_dispatch_queue> *_openSocketCompletionHandlerQueue;
    NSString *_openSocketCompletionHandlerID;
    NSInputStream *_inputStreamForSocket;
    NSOutputStream *_outputStreamForSocket;
    _Bool _hasTimedOut;
    NSNumber *_clientTimeout;
    NSMutableDictionary *_awdMetrics;
}

@property (nonatomic, readonly) int socket;
@property (nonatomic, readonly) unsigned long long mtu;
@property (nonatomic, readonly) NSDictionary *metrics;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (void)_close;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;
- (void)_connect;
- (void)_daemonDied:(id)arg1;
- (id)deviceConnectionKey;
- (void)_cleanupCompletionBlock;
- (id)initWithDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (_Bool)updateConnectionWithOptions:(id)arg1 error:(id *)arg2;

@end
