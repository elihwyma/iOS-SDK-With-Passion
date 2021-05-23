/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKPlayer.h>

#import <GameCenterFoundation/Swift-Protocol.h>

@class GKEventEmitter, GKInvite, NSInvocation, NSString, UIAlertView;

@protocol GKLocalPlayerListenerPrivate;

@interface GKLocalPlayer : GKPlayer <Swift>

{
    _Bool _authenticated;
    _Bool _didAuthenticate;
    _Bool _validatingAccount;
    _Bool _enteringForeground;
    _Bool _newToGameCenter;
    _Bool _showingInGameUI;
    _Bool _shouldPreserveOnboardingUI;
    GKInvite *_acceptedInvite;
    CDUnknownBlockType _validateAccountCompletionHandler;
    UIAlertView *_loginAlertView;
    UIAlertView *_currentAlert;
    NSInvocation *_currentFriendRequestInvocation;
    long long _environment;
    GKEventEmitter<GKLocalPlayerListenerPrivate> *_eventEmitter;
    double _authStartTimeStamp;
    unsigned long long _authenticationType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType validateAccountCompletionHandler;
@property (retain, nonatomic) UIAlertView *loginAlertView;
@property (nonatomic) UIAlertView *currentAlert;
@property (retain, nonatomic) NSInvocation *currentFriendRequestInvocation;
@property (nonatomic) _Bool didAuthenticate;
@property (nonatomic) _Bool validatingAccount;
@property (nonatomic) _Bool enteringForeground;
@property (nonatomic) _Bool appIsInBackground;
@property (nonatomic, getter=isAuthenticated) _Bool authenticated;
@property (nonatomic, readonly, getter=isAuthenticating) _Bool authenticating;
@property (nonatomic) _Bool insideAuthenticatorInvocation;
@property (retain, nonatomic) NSString *accountName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) GKInvite *acceptedInvite;
@property (nonatomic, readonly, getter=isAvatarEditingRestricted) _Bool avatarEditingRestricted;
@property (nonatomic, getter=isPurpleBuddyAccount) _Bool purpleBuddyAccount;
@property (nonatomic, getter=isDefaultNickname) _Bool defaultNickname;
@property (nonatomic, readonly) long long environment;
@property (nonatomic, readonly) _Bool allowNearbyMultiplayer;
@property (nonatomic, getter=isNewToGameCenter) _Bool newToGameCenter;
@property (nonatomic, readonly) NSString *facebookUserID;
@property (nonatomic, readonly) NSString *iCloudUserID;
@property (nonatomic, readonly, getter=isFindable) _Bool findable;
@property (retain, nonatomic) GKEventEmitter<GKLocalPlayerListenerPrivate> *eventEmitter;
@property (nonatomic, getter=isShowingInGameUI) _Bool showingInGameUI;
@property (nonatomic) _Bool shouldPreserveOnboardingUI;
@property (nonatomic) double authStartTimeStamp;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic, readonly, getter=isUnderage) _Bool underage;
@property (nonatomic, readonly, getter=isMultiplayerGamingRestricted) _Bool multiplayerGamingRestricted;
@property (copy, nonatomic) CDUnknownBlockType authenticateHandler;

+ (_Bool)supportsSecureCoding;
+ (void)performAsync:(CDUnknownBlockType)arg1;
+ (id)local;
+ (void)performSync:(CDUnknownBlockType)arg1;
+ (id)localPlayer;
+ (id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1;
+ (id)authenticatedLocalPlayersFiltered:(long long)arg1;
+ (id)localPlayerAccessQueue;
+ (id)_localPlayersFromInternals:(id)arg1 authenticated:(_Bool)arg2;
+ (void)_sendPlayerAuthAPINotificationForLoggedInPlayerInternals:(id)arg1 loggedOutPlayerInternals:(id)arg2 oldPrimary:(id)arg3 newPrimary:(id)arg4;
+ (id)localPlayers;
+ (id)authenticatedLocalPlayers;
+ (id)localPlayerForCredential:(id)arg1;
+ (void)authenticatedLocalPlayersDidChange:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)authenticateWithUsername:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)registerListener:(id)arg1;
- (void)showSettings;
- (id)friends;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasEmailAddress:(id)arg1;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (void)signOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadRecentPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeFriend:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)loadChallengableFriendsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelFriendRequestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)reportAuthenticationLoginCanceled;
- (void)createFriendRequestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)unregisterListener:(id)arg1;
- (_Bool)shouldDisplayWelcomeBannerForPlayer:(id)arg1 lastAuthDate:(id)arg2 remoteUI:(_Bool)arg3 timeBetweenBanners:(double)arg4;
- (void)reportAuthenticationStartForPlayer;
- (void)reportAuthenticationErrorNoInternetConnection;
- (void)reportAuthenticationPlayerAuthenticated;
- (void)callAuthHandlerWithError:(id)arg1;
- (void)reportAuthenticationFailedForPlayer;
- (void)reportAuthenticatingWithGreenBuddyInvocation;
- (void)reportAuthenticatingWithAuthKitInvocation;
- (void)updateFromLocalPlayer:(id)arg1;
- (void)fetchSavedGamesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setupForCloudSavedGames;
- (void)setStatus:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_loadFriendPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_startAuthenticationForExistingPrimaryPlayer;
- (void)getPlayerIDFromFriendCode:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)acceptFriendRequestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)scopedIDsArePersistent;
- (void)loadFriendPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadFriendsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateLoginStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllFriendsWithBlock:(CDUnknownBlockType)arg1;
- (void)fetchMultiplayerGameInvite;
- (void)fetchTurnBasedEvent;
- (void)fetchCustomTournamentInvite;
- (void)cancelGameInvite:(id)arg1;
- (void)inviteeAcceptedGameInviteWithNotification:(id)arg1;
- (void)inviteeDeclinedGameInviteWithNotification:(id)arg1;
- (void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unregisterAllListeners;

@end
