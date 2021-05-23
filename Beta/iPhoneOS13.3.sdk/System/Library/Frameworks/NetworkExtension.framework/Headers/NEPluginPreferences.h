/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NEPluginPreferences : NSObject

{
    struct __SCPreferences *_prefs;
    NSString *_pluginType;
}

@property struct __SCPreferences *prefs;
@property (readonly) NSString *pluginType;

+ (void)removePreferencesForPluginType:(id)arg1;
+ (id)copyIdentifiersOfInstalledVPNApps;

- (void)dealloc;
- (id)initWithPluginType:(id)arg1;
- (id)copyAppURL;
- (_Bool)setPreferences:(struct __CFDictionary *)arg1 ofType:(long long)arg2 configurationIdentifier:(id)arg3;
- (struct __CFDictionary *)copyPersistentDataOfType:(long long)arg1 configurationIdentifier:(id)arg2;

@end
