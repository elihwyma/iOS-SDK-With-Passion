/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@interface PSWeakReference : NSObject

{
    id _location;
}

+ (id)weakReferenceWithObject:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)object;
- (id)initWithObject:(id)arg1;

@end
