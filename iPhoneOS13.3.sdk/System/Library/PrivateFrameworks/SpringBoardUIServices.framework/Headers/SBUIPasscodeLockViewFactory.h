//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBUIPasscodeLockViewFactory : NSObject
{
}

+ (id)_defaultPasscodeBiometricResource;
+ (void)setPasscodeBiometricResource:(id)arg1;
+ (void)_commonInitPasscodeView:(id)arg1 forStyle:(int)arg2;
+ (id)_passcodeLockViewForStyle:(int)arg1 withLightStyle:(BOOL)arg2;
+ (id)installTonightPasscodeLockViewForUsersCurrentStyle;
+ (id)lightPasscodeLockViewForStyle:(int)arg1;
+ (id)lightPasscodeLockViewForUsersCurrentStyle;
+ (id)passcodeLockViewForStyle:(int)arg1;
+ (id)passcodeLockViewForUsersCurrentStyle;

@end

