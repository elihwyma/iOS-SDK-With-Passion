/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSInputStream.h>

@class NSArray, SLRequestMultiPartInputStream;

@protocol NSStreamDelegate;

@interface SLRequestBodyInputStream : NSInputStream

{
    NSArray *_inputStreams;
    SLRequestMultiPartInputStream *_currentStream;
    unsigned long long _dataLength;
    unsigned long long _dataOffset;
    unsigned long long _currentIndex;
    unsigned long long _currentOffset;
    unsigned long long _currentLength;
    _Bool _openEventSent;
    unsigned long long _streamStatus;
    struct __CFRunLoopSource *_rls;
    CDUnknownFunctionPointerType _clientCallback;
    CDStruct_4210025a _clientContext;
    SLRequestBodyInputStream *_selfReferenceDuringStreamEventTrigger;
    id <NSStreamDelegate> _delegate;
}

@property (weak) id <NSStreamDelegate> delegate;
@property (readonly) unsigned long long totalBytes;

- (void)dealloc;
- (void)open;
- (void)close;
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
- (id)initWithMultiParts:(id)arg1 multiPartBoundary:(id)arg2;
- (void)_scheduleCallback;
- (id)nextStream;
- (void)_streamEventTrigger;
- (unsigned long long)bytesRead;

@end
