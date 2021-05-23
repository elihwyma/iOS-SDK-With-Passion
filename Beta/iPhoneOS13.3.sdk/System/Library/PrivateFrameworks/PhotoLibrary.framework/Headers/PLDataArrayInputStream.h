/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <Foundation/NSInputStream.h>

@class NSArray, NSMutableData;

@protocol PLDataArrayInputStreamProgressDelegate;

@interface PLDataArrayInputStream : NSInputStream

{
    NSArray *_dataArray;
    NSMutableData *_bodyData;
    unsigned long long _dataCount;
    unsigned long long _dataLength;
    unsigned long long _dataOffset;
    unsigned long long _currentIndex;
    unsigned long long _currentOffset;
    unsigned long long _currentLength;
    _Bool _openEventSent;
    unsigned long long _streamStatus;
    id _delegate;
    id <PLDataArrayInputStreamProgressDelegate> _progressDelegate;
    struct __CFRunLoopSource *_rls;
    CDUnknownFunctionPointerType _clientCallback;
    CDStruct_4210025a _clientContext;
}

@property (nonatomic) id <PLDataArrayInputStreamProgressDelegate> progressDelegate;

- (void)dealloc;
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
- (unsigned long long)totalBytes;
- (void)_updateProgress;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (unsigned long long)bytesRead;
- (id)initWithDataArray:(id)arg1;
- (void)_scheduleProgressUpdate;

@end
