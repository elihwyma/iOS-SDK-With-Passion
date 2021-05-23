/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPort.h>

@interface NSMachPort : NSPort

{
    id _delegate;
    unsigned long long _flags;
    unsigned int _machPort;
    unsigned long long _reserved;
}

@property (readonly) unsigned int machPort;

+ (id)port;
+ (id)portWithMachPort:(unsigned int)arg1;
+ (_Bool)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned long long)arg7;
+ (void)resetAllPorts;
+ (id)portWithMachPort:(unsigned int)arg1 options:(unsigned long long)arg2;
+ (void)_fixNSMachPortLeak;

- (id)init;
- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (void)invalidate;
- (_Bool)isValid;
- (unsigned long long)_cfTypeID;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)initWithMachPort:(unsigned int)arg1;
- (_Bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (_Bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;
- (id)initWithMachPort:(unsigned int)arg1 options:(unsigned long long)arg2;
- (_Bool)sendBeforeTime:(double)arg1 streamData:(void *)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;

@end
