/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSInputStream.h>

@interface WFFileChunkInputStream : NSInputStream

{
    unsigned long long _offset;
    unsigned long long _length;
    NSInputStream *_inputStream;
}

@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) unsigned long long length;

- (void)open;
- (void)close;
- (id)propertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long long)streamStatus;
- (id)streamError;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)hasBytesAvailable;
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_e097db04 *)arg3;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(const struct __CFString *)arg2;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(const struct __CFString *)arg2;
- (id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;

@end
