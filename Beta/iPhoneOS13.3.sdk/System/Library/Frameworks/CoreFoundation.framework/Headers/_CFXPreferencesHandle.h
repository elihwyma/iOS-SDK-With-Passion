/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class _CFXPreferences;

__attribute__((visibility("hidden")))
@interface _CFXPreferencesHandle : NSObject

{
    _CFXPreferences *prefs;
    struct os_unfair_lock_s lock;
    unsigned int overrideEUID;
}

- (id)init;
- (void)dealloc;
- (void)setEUIDOverride:(unsigned int)arg1;
- (id)copyPrefs;

@end
