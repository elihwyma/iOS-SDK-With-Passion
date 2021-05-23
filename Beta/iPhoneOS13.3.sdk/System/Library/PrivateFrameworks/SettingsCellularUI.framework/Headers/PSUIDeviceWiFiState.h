/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PSUIDeviceWiFiState : NSObject

+ (id)sharedInstance;

- (id)init;
- (id)initPrivate;
- (_Bool)isConnectedOverWiFi;

@end
