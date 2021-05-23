/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSLocale.h>

__attribute__((visibility("hidden")))
@interface NSAutoLocale : NSLocale

{
    NSLocale *loc;
    struct _opaque_pthread_mutex_t _lock;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (id)objectForKey:(id)arg1;
- (unsigned char)_nullLocale;
- (void)_setNullLocale;
- (id)_prefs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)_init;
- (void)_update:(id)arg1;

@end
