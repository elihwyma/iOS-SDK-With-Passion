/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@interface NSPort : NSObject <Swift>

@property (readonly, getter=isValid) _Bool valid;
@property (readonly) unsigned long long reservedSpaceLength;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)port;
+ (id)portWithMachPort:(unsigned int)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (unsigned int)machPort;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)replacementObjectForCoder:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (_Bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (Class)classForPortCoder;
- (_Bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;

@end
