/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, MSAlertManager;

@interface MSAuthenticationManager : NSObject

{
    int _state;
    MSAlertManager *_alertManager;
    ACAccountStore *_acAccountStore;
    int _bagRefetchCount;
    _Bool _isListeningToKeybagChanges;
    int _keybagChangeNotifyToken;
}

@property (nonatomic) _Bool isListeningToKeybagChanges;
@property (nonatomic) int keybagChangeNotifyToken;
@property (nonatomic, readonly, getter=isWaitingForAuth) _Bool waitingForAuth;

+ (id)sharedManager;

- (void)dealloc;
- (id)initWithAlertManager:(id)arg1;
- (void)_renewCredentialsForAccount:(id)arg1;
- (void)waitForDeviceUnlock;
- (void)didEncounterAuthenticationFailureForPersonID:(id)arg1;
- (void)_didReceiveAccountConfigChangedNotification;
- (void)didEncounterAuthenticationSuccessForPersonID:(id)arg1;
- (void)rearmAuthenticationAlert;

@end
