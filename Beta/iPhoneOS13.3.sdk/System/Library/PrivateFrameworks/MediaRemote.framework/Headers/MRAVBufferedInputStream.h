/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSInputStream.h>

@class NSMutableData, NSMutableDictionary, NSObject, NSRunLoop;

@protocol NSStreamDelegate, OS_dispatch_queue;

@interface MRAVBufferedInputStream : NSInputStream

{
    unsigned long long _status;
    id <NSStreamDelegate> _delegate;
    NSMutableDictionary *_properties;
    NSRunLoop *_scheduledRunLoop;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableData *_buffer;
    NSMutableData *_preBuffer;
}

- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithFileAtPath:(id)arg1;
- (void)open;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long long)streamStatus;
- (id)streamError;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)hasBytesAvailable;
- (void)_init;
- (void)notifyDelegateOfStreamEvent:(unsigned long long)arg1;
- (void)_onSerialQueue_handleDataReceived:(id)arg1;
- (void)_onRunLoop_notifyDelegateOfStreamEvent:(unsigned long long)arg1;
- (void)handleDataReceived:(id)arg1;
- (void)handleStreamDisconnect;

@end
