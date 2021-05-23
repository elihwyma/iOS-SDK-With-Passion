/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBAirplaneModeController, SBTelephonyManager;

@interface SBApplicationLaunchAlertEvaluatorForNetworkBasedAlertItems : NSObject

{
    SBAirplaneModeController *_airplaneModeController;
    SBTelephonyManager *_telephonyManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_airplaneModeController;
- (id)_telephonyManager;
- (unsigned long long)shouldShowLaunchAlertForApplication:(id)arg1;
- (id)initWithAirplaneModeController:(id)arg1 telephonyManager:(id)arg2;

@end
