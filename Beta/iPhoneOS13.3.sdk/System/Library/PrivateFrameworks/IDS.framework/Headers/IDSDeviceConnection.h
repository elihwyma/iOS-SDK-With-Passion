/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSDictionary, NSInputStream, NSOutputStream, _IDSDeviceConnection;

@interface IDSDeviceConnection : NSObject

{
    _IDSDeviceConnection *_internal;
}

@property (nonatomic, readonly) _IDSDeviceConnection *_internal;
@property (nonatomic, readonly) int socket;
@property (nonatomic, readonly) unsigned long long mtu;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic, readonly) NSDictionary *metrics;

- (void)dealloc;
- (id)description;
- (void)close;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (_Bool)updateConnectionWithOptions:(id)arg1 error:(id *)arg2;
- (id)initSocketWithDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (id)initStreamWithDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;

@end
