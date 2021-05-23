/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class LAContext, NSData, NSHashTable, NSMapTable, NSMutableOrderedSet;

@protocol _SFAuthenticationClient, _SFAuthenticationContextDelegate;

@interface _SFAuthenticationContext : NSObject

{
    LAContext *_context;
    id <_SFAuthenticationClient> _currentClientBeingAuthenticated;
    NSHashTable *_clients;
    NSMutableOrderedSet *_clientsAwaitingAuthentication;
    NSMapTable *_clientsAwaitingAuthenticationToCompletionBlocks;
    double _authenticationGracePeriod;
    double _lastAuthenticatedSessionStartTime;
    double _lastAuthenticatedSessionEndTime;
    double _lastApplicationBackgroundTime;
    _Bool _successfullyAuthenticated;
    _Bool _authenticationInvalidated;
    _Bool _ongoingAuthenticationCanceled;
    int _notificationToken;
    _Bool _matchFound;
    _Bool _fingerDetectRequired;
    unsigned long long _numberOfBiometricAuthenticationFailures;
    id <_SFAuthenticationContextDelegate> _delegate;
}

@property (nonatomic, readonly) _Bool needsAuthentication;
@property (nonatomic, readonly) NSData *externalizedContext;
@property (weak, nonatomic) id <_SFAuthenticationContextDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)_authenticationContext;
- (void)invalidateClient:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)authenticateForClient:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_invalidateAuthentication;
- (_Bool)_monotonicTimeIsWithinAuthenticationGracePeriod:(double)arg1;
- (_Bool)_hasAuthenticationCapability:(id *)arg1;
- (void)_processNextClientAwaitingAuthenticationUserInitiated:(_Bool)arg1;
- (_Bool)_contextRequiresSessionBasedAuthentication;
- (void)_evaluatePolicyForClient:(id)arg1 userInitiated:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (_Bool)_contextShouldAllowPasscodeFallback;
- (_Bool)_contextShouldAllowMultipleBiometricFailures;
- (void)_cancelOngoingAuthentication;
- (_Bool)_canInvalidateAuthentication;
- (void)_cancelOngoingAndPendingAuthentications;
- (void)_handleTouchIDEventWithParameters:(id)arg1;
- (void)event:(long long)arg1 params:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)preemptOngoingAuthenticationWithPasccodeAuthentication;

@end
