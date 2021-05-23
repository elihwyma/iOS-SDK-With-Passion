/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSInputStream.h>

@class ASTrafficLogger, NSData;

@interface DAConvertCRtoCRLFStream : NSInputStream

{
    NSData *_mimeData;
    NSData *_preflightData;
    NSData *_postflightData;
    unsigned long long _totalLength;
    unsigned long long _readOffset;
    _Bool _lastByteCopiedWasCR;
    _Bool _openEventSent;
    unsigned long long _streamStatus;
    _Bool _intendToStream;
    id _delegate;
    struct __CFRunLoopSource *_rls;
    CDUnknownFunctionPointerType _clientCallback;
    CDStruct_4210025a _clientContext;
    ASTrafficLogger *_trafficLogger;
}

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (void)open;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long long)streamStatus;
- (id)streamError;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)hasBytesAvailable;
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (id)initWithMIMEData:(id)arg1 preflightData:(id)arg2 postflightData:(id)arg3 intendToStream:(_Bool)arg4;

@end
