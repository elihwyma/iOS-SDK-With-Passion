/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TFBetaApplicationProxy : NSObject

{
    NSString *_bundleIdentifier;
    NSString *_logKey;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *logKey;
@property (copy, nonatomic, readonly) NSString *preferredLocalizedDisplayNameForInstalledVersion;

- (id)initForAppWithIdentifier:(id)arg1;
- (_Bool)isProactiveFeedbackEnabledForInstalledVersion;
- (_Bool)isBetaAppLaunchScreenEnabledForInstalledVersion;
- (void)deviceWillInstallVersion:(id)arg1 build:(id)arg2 withLocalizedDisplayNames:(id)arg3 localizedTestNotes:(id)arg4 primaryLocaleKey:(id)arg5 developerName:(id)arg6 expirationDate:(id)arg7 iconUrlTemplate:(id)arg8 testerEmail:(id)arg9;
- (void)setProactiveFeedbackEnabled:(_Bool)arg1 forVersion:(id)arg2 build:(id)arg3;
- (void)setBetaAppLaunchScreenEnabled:(_Bool)arg1 forVersion:(id)arg2 build:(id)arg3;
- (void)updateLocalizedTestNotes:(id)arg1 forVersion:(id)arg2 build:(id)arg3;
- (void)overwriteMetadataForInstalledVersion:(id)arg1 build:(id)arg2 withLocalizedDisplayNames:(id)arg3 localizedTestNotes:(id)arg4 primaryLocaleKey:(id)arg5 developerName:(id)arg6 expirationDate:(id)arg7 iconUrlTemplate:(id)arg8 testerEmail:(id)arg9;

@end
