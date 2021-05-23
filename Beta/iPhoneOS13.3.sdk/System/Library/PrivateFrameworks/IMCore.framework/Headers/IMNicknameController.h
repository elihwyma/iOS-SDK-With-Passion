/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMNickname, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet;

@interface IMNicknameController : NSObject

{
    _Bool _isInitialLoad;
    NSMutableDictionary *_responseHandlers;
    IMNickname *_personalNickname;
    NSMutableArray *_fetchPersonalNicknameCompletionBlocks;
    NSDictionary *_handledNicknames;
    NSDictionary *_pendingNicknameUpdates;
    NSSet *_whitelistedHandlesForSharing;
    NSSet *_blacklistedHandlesForSharing;
    NSMutableSet *_scrutinyNicknameHandles;
}

@property (retain, nonatomic) IMNickname *personalNickname;
@property (retain, nonatomic) NSMutableArray *fetchPersonalNicknameCompletionBlocks;
@property (retain, nonatomic) NSDictionary *handledNicknames;
@property (retain, nonatomic) NSDictionary *pendingNicknameUpdates;
@property (retain, nonatomic) NSSet *whitelistedHandlesForSharing;
@property (retain, nonatomic) NSSet *blacklistedHandlesForSharing;
@property (retain, nonatomic) NSMutableSet *scrutinyNicknameHandles;
@property (nonatomic) _Bool isInitialLoad;
@property (retain, nonatomic) NSMutableDictionary *responseHandlers;

+ (id)sharedInstance;
+ (_Bool)accountsMatchUpToUseNicknames;
+ (_Bool)multiplePhoneNumbersTiedToAppleID;

- (id)init;
- (id)contactStore;
- (id)daemonController;
- (void)clearHandleFromScrutiny:(id)arg1;
- (_Bool)shouldOfferNicknameSharingForChat:(id)arg1;
- (unsigned long long)nicknameUpdateForHandle:(id)arg1 nicknameIfAvailable:(id *)arg2;
- (id)handlesForNicknamesUnderScrutiny;
- (void)ignorePendingNicknameUpdatesForHandle:(id)arg1;
- (void)markHandleUnderScrutiny:(id)arg1;
- (void)clearPendingNicknameUpdatesForHandle:(id)arg1;
- (void)whitelistHandlesForNicknameSharing:(id)arg1 forChat:(id)arg2;
- (void)blacklistHandlesForNicknameSharing:(id)arg1;
- (void)fetchPersonalNicknameWithCompletion:(CDUnknownBlockType)arg1;
- (void)updatePersonalNicknameIfNecessaryWithMeCardSharingResult:(id)arg1;
- (id)nicknameForHandle:(id)arg1;
- (void)setPersonalNicknameFromOnboardingResult:(id)arg1;
- (void)updatePersonalNickname:(id)arg1;
- (void)updatePendingNicknames:(id)arg1 handledNicknames:(id)arg2;
- (void)handleSharingListsDidChange;
- (void)updateSharingWhitelist:(id)arg1 blacklist:(id)arg2;
- (void)nicknameStoreDidChange;
- (_Bool)_nicknameFeatureEnabled;
- (void)_updateLocalNicknameStore;
- (void)_broadcastNicknamePreferencesDidChange:(id)arg1;
- (void)_updatePersonalNicknameWithMeCardIfNecessary;
- (void)_meCardDidChange:(id)arg1;
- (id)_handleIDsForHandle:(id)arg1;
- (_Bool)_canUpdatePersonalNickname;
- (_Bool)handleIsWhitelistedForSharing:(id)arg1;
- (_Bool)handleIsBlacklistedForSharing:(id)arg1;
- (id)getNicknameHandlesUnderScrutiny;
- (void)setNicknameHandlesUnderScrutiny;
- (id)meCardSharingState;
- (id)truncateNameIfNeeded:(id)arg1;
- (_Bool)meCardSyncEnabled;
- (id)IMSharedHelperMD5Helper:(id)arg1;

@end
