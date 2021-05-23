/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class ICAgeVerificationState, NSError;

@protocol MPCExplicitContentAuthorizationDelegate;

@interface MPCExplicitContentAuthorizationManager : NSObject

{
    id <MPCExplicitContentAuthorizationDelegate> _delegate;
    long long _status;
    NSError *_authorizationError;
    ICAgeVerificationState *_lastKnownAgeVerificationState;
}

@property (nonatomic, readonly) long long authorizationReason;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSError *authorizationError;
@property (copy, nonatomic) ICAgeVerificationState *lastKnownAgeVerificationState;
@property (weak, nonatomic) id <MPCExplicitContentAuthorizationDelegate> delegate;

+ (id)sharedManager;

- (id)_init;
- (_Bool)isItemAuthorized:(id)arg1 shouldAskForAuthorization:(_Bool)arg2;
- (_Bool)isItemAuthorized:(id)arg1;
- (id)_retrieveAgeVerificationStateForUserIdentity:(id)arg1;
- (void)_updateAuthorizationStatusWithAuthorizationState:(id)arg1 forItem:(id)arg2;
- (id)_explicitContentErrorWithUnderlyingError:(id)arg1 message:(id)arg2;
- (_Bool)_shouldAskPlaybackAuthorizationForItem:(id)arg1 reason:(long long)arg2;
- (_Bool)_askPlaybackAuthorizationForItem:(id)arg1 reason:(long long)arg2;
- (void)_setupWithAgeVerificationState:(id)arg1;
- (void)_setupWithAgeGateForItem:(id)arg1;

@end
