/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <Foundation/NSObject.h>

@class NSString, SFWirelessSettingsController, UIAlertController;

@protocol SFAirDropDiscoveryAlertControllerDelegate, SFAirDropDiscoveryControllerDelegate;

@interface SFAirDropDiscoveryController : NSObject

{
    id _delegate;
    _Bool _isVisible;
    _Bool _isLegacyDevice;
    _Bool _isLegacyModeEnabled;
    _Bool _isLegacyModeSettable;
    struct __SFOperation *_controller;
    id _alertControllerDelegate;
    UIAlertController *_alertController;
    SFWirelessSettingsController *_settingsController;
    long long _discoverableMode;
}

@property (readonly, getter=isVisible) _Bool visible;
@property long long discoverableMode;
@property (readonly, getter=isLegacyDevice) _Bool legacyDevice;
@property (getter=isLegacyModeEnabled) _Bool legacyModeEnabled;
@property (readonly, getter=isLegacyModeSettable) _Bool legacyModeSettable;
@property (weak) id <SFAirDropDiscoveryControllerDelegate> delegate;
@property (weak) id <SFAirDropDiscoveryAlertControllerDelegate> alertControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;
- (void)wirelessSettingsDidChange:(id)arg1;
- (long long)operationDiscoverableModeToInteger:(id)arg1;
- (void)updateAlertControllerTitle;
- (id)discoverableModeToString:(long long)arg1;
- (id)discoverableModeAlertController;

@end
