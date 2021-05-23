/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PSUICoreTelephonyCallCache : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)initPrivate;
- (id)localizedPhoneNumber:(id)arg1 context:(id)arg2;
- (id)currentCallTypes;

@end
