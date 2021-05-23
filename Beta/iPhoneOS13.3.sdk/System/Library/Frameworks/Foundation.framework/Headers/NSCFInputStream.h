/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSInputStream.h>

__attribute__((visibility("hidden")))
@interface NSCFInputStream : NSInputStream

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
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
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_e097db04 *)arg3;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;

@end
