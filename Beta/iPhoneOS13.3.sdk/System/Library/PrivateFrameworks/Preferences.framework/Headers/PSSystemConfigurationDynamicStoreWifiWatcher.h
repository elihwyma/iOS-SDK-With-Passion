/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject

{
    struct __SCDynamicStore *_prefs;
    struct __CFString *_wifiKey;
    struct __CFString *_wifiInterface;
    struct __CFString *_tetheringLink;
}

+ (id)sharedInstance;
+ (_Bool)wifiEnabled;

- (id)init;
- (void)dealloc;
- (id)wifiConfig;
- (void)findKeysAirPortState:(id *)arg1 andTetheringState:(id *)arg2;
- (id)_wifiNameWithState:(id)arg1;
- (id)_wifiPowerWithState:(id)arg1;
- (id)_wifiTetheringWithState:(id)arg1;

@end
