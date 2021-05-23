/*
 Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

#import <Foundation/NSObject.h>

@class LAContext, NSDictionary, UIView;

@protocol LAUIAuthenticationCoreDelegate;

__attribute__((visibility("hidden")))
@interface LAUIAuthenticationCore : NSObject

{
    _Bool _doneMatching;
    _Bool _applicationActive;
    _Bool _keyWindow;
    _Bool _uiActive;
    NSObject<LAUIAuthenticationCoreDelegate> *_delegate;
    UIView *_view;
    long long _biometryType;
    unsigned long long _enabledMechanisms;
    unsigned long long _activeMechanisms;
    LAContext *_context;
    NSDictionary *_authenticationResult;
}

@property (nonatomic) unsigned long long enabledMechanisms;
@property (nonatomic) unsigned long long activeMechanisms;
@property (nonatomic, getter=isApplicationActive) _Bool applicationActive;
@property (nonatomic, getter=isKeyWindow) _Bool keyWindow;
@property (nonatomic, getter=isUiActive) _Bool uiActive;
@property (retain, nonatomic) LAContext *context;
@property (nonatomic, readonly) NSDictionary *authenticationResult;
@property (weak, nonatomic) NSObject<LAUIAuthenticationCoreDelegate> *delegate;
@property (retain, nonatomic) UIView *view;
@property (nonatomic, readonly) long long biometryType;

+ (void)performBlockOnMainThread:(CDUnknownBlockType)arg1;

- (void)_notification:(id)arg1;
- (_Bool)disableMechanism:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)enableMechanism:(unsigned long long)arg1 error:(id *)arg2;
- (void)event:(long long)arg1 params:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)notificationNames;
- (void)checkView;
- (void)_setupMechanisms:(unsigned long long)arg1;
- (id)initWithMechanisms:(unsigned long long)arg1;
- (_Bool)isMechanismAvailable:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)isMechanismEnabled:(unsigned long long)arg1;
- (_Bool)isMechanismActive:(unsigned long long)arg1;
- (void)_setupNotifications:(_Bool)arg1;
- (void)_enableAvailableMechanisms:(unsigned long long)arg1;
- (_Bool)_mechanism:(unsigned long long)arg1 enable:(_Bool)arg2 error:(id *)arg3;
- (void)startOrStopBackgroundMechanisms;
- (void)_stopBackgroundMechanisms;
- (void)_startBackgroundMechanisms;
- (long long)_policyForBackgroundMechanisms;
- (void)_handleBackgroundMechanismsResult:(id)arg1 error:(id)arg2 context:(id)arg3;
- (void)_biometryState:(long long)arg1;
- (void)_processActivityChangeForNotification:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_simpleStatusInParams:(id)arg1 touchId:(long long)arg2 faceId:(long long)arg3;
- (void)_biometricNoMatch;

@end
