/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSBlock.h>

__attribute__((visibility("hidden")))
@interface __NSGlobalBlock : NSBlock

- (unsigned long long)retainCount;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;

@end
