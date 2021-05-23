/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSLocale.h>

__attribute__((visibility("hidden")))
@interface __NSCFLocale : NSLocale

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)objectForKey:(id)arg1;
- (unsigned char)_nullLocale;
- (void)_setNullLocale;
- (id)_prefs;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (id)initWithLocaleIdentifier:(id)arg1;

@end
