/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/__NSCFString.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface __NSCFConstantString : __NSCFString

@property (copy, readonly) NSString *redactedDescription;

- (unsigned long long)retainCount;
- (_Bool)isNSCFConstantString__;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;

@end
