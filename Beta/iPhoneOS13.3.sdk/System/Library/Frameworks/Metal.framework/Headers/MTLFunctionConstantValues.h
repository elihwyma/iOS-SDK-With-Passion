/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface MTLFunctionConstantValues : NSObject

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (void)setConstantValue:(const void *)arg1 type:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setConstantValue:(const void *)arg1 type:(unsigned long long)arg2 withName:(id)arg3;
- (void)setConstantValues:(const void *)arg1 type:(unsigned long long)arg2 withRange:(struct _NSRange)arg3;

@end
