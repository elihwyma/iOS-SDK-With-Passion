/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPort.h>

@interface NSMessagePort : NSPort

{
    void *_port;
    id _delegate;
}

+ (_Bool)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned long long)arg7;
+ (void)_fixNSMessagePortLeak;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)name;
- (void)invalidate;
- (_Bool)isValid;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)setName:(id)arg1;
- (id)initWithName:(id)arg1;
- (_Bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (_Bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;
- (_Bool)sendBeforeTime:(double)arg1 streamData:(void *)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (id)initWithRemoteName:(id)arg1;

@end
