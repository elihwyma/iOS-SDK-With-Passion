/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NPSManager;

@protocol OS_dispatch_queue;

@interface NTKClockStatusBarSettings : NSObject

{
    NPSManager *_npsManager;
    _Bool _notificationsIndicatorEnabled;
    NSObject<OS_dispatch_queue> *_prefsQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;
- (_Bool)_isNotificationsIndicatorEnabledInPreferences;
- (_Bool)isNotificationsIndicatorEnabled;
- (void)setNotificationsIndicatorEnabled:(_Bool)arg1;

@end
