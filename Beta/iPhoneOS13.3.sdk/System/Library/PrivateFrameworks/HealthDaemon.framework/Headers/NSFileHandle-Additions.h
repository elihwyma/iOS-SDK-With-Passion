/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSFileHandle.h>

@interface NSFileHandle (Additions)

- (_Bool)hk_writeValue:(const void *)arg1 size:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)hk_readValue:(void *)arg1 ofSize:(unsigned long long)arg2 error:(id *)arg3;

@end
