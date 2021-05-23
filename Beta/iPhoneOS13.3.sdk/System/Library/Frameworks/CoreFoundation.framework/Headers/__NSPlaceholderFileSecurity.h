/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSFileSecurity.h>

#import <CoreFoundation/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface __NSPlaceholderFileSecurity : NSFileSecurity <Swift>

+ (_Bool)supportsSecureCoding;
+ (id)immutablePlaceholder;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileSec:(struct _filesec *)arg1;

@end
