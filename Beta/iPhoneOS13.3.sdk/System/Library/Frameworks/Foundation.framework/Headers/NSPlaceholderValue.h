/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSNumber.h>

__attribute__((visibility("hidden")))
@interface NSPlaceholderValue : NSNumber

{
    struct _NSZone *zoneForInstance;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (unsigned long long)retainCount;
- (const char *)objCType;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)initWithCoder:(id)arg1;
- (void)getValue:(void *)arg1;
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;

@end
