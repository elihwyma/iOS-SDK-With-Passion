/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

#import <Preferences/Swift-Protocol.h>

@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setValue:(double)arg1;
+ (double)currentValue;
+ (id)iconImage;
+ (id)preferencesURL;
+ (double)incrementedBrightnessValue:(double)arg1;
+ (void)incrementBrightnessValue:(double)arg1;
+ (void)beginBrightnessAdjustmentTransaction;
+ (void)endBrightnessAdjustmentTransaction;
+ (void)beginObservingExternalBrightnessChanges:(CDUnknownBlockType)arg1 changedAction:(CDUnknownBlockType)arg2;
+ (void)endObservingExternalBrightnessChanges;
+ (_Bool)deviceSupportsAutoBrightness;
+ (void)setAutoBrightnessEnabled:(_Bool)arg1;
+ (_Bool)autoBrightnessEnabled;

@end
