/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

#import <Preferences/Swift-Protocol.h>

@class NSString;

@interface PSGuidedAccessSettingsDetail : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)iconImage;
+ (unsigned long long)guidedAccessAvailability;
+ (id)preferencesURL;
+ (_Bool)guidedAccessHasPasscode;
+ (void)setGuidedAccessSwitchEnabled:(_Bool)arg1;
+ (void)enterGuidedAccessMode;

@end
