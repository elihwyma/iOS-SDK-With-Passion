/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class LAContext, NSString;

@interface _SFManagedFeatureObserver : NSObject

{
    _Bool _cachedAuthenticationRequiredToAutoFill;
    LAContext *_context;
}

@property (nonatomic, readonly) _Bool authenticationRequiredToAutoFill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedObserver;

- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (_Bool)_isUserEnrolledInBiometricAuthentication;

@end
