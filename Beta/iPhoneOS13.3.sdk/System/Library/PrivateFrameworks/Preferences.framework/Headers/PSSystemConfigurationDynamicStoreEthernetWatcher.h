/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject

{
    struct __SCDynamicStore *_dynamicStore;
    struct __CFRunLoopSource *_dynamicStoreSource;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)registerForEthernetAdapterNotifications;
- (id)ethernetNetworkInterfaces;
- (_Bool)isHiddenEthernetInterface:(struct __SCNetworkInterface *)arg1;
- (_Bool)hasEthernetNetworkInterfaces;
- (void)ethernetDynamicStoreDidChange;

@end
