/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBUFormDataController.h>

@class NSString, WBSOneTimeCodeMonitor, _SFAuthenticationContext;

@interface _SFFormDataController : WBUFormDataController

{
    WBSOneTimeCodeMonitor *_oneTimeCodeMonitor;
    _SFAuthenticationContext *_autoFillAuthenticationContext;
}

@property (nonatomic, readonly) _SFAuthenticationContext *autoFillAuthenticationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (id)oneTimeCodeMonitor;
- (double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(id)arg1;
- (_Bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (_Bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (_Bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (id)initWithAggressiveKeychainCaching:(_Bool)arg1;

@end
