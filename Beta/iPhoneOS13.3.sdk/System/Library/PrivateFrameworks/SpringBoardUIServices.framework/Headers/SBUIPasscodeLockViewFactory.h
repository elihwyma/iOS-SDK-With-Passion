/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSObject.h>

@interface SBUIPasscodeLockViewFactory : NSObject

+ (id)passcodeLockViewForStyle:(int)arg1;
+ (id)_passcodeLockViewForStyle:(int)arg1 withLightStyle:(_Bool)arg2;
+ (id)lightPasscodeLockViewForStyle:(int)arg1;
+ (void)_commonInitPasscodeView:(id)arg1 forStyle:(int)arg2;
+ (id)_defaultPasscodeBiometricResource;
+ (id)passcodeLockViewForUsersCurrentStyle;
+ (id)lightPasscodeLockViewForUsersCurrentStyle;
+ (id)installTonightPasscodeLockViewForUsersCurrentStyle;
+ (void)setPasscodeBiometricResource:(id)arg1;

@end
