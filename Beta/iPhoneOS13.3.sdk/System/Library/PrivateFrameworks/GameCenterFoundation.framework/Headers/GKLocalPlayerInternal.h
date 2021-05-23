/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKFriendPlayerInternal.h>

@class NSArray, NSNumber, NSString;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal

{
    NSString *_accountName;
    NSArray *_emailAddresses;
    NSString *_facebookUserID;
    NSNumber *_iCloudUserID;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
    unsigned long long _loginStatus;
}

@property unsigned long long loginStatus;

+ (_Bool)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (id)accountName;
- (id)emailAddresses;
- (void)setEmailAddresses:(id)arg1;
- (void)setAccountName:(id)arg1;
- (_Bool)isUnderage;
- (id)iCloudUserID;
- (void)setICloudUserID:(id)arg1;
- (void)setNumberOfRequests:(unsigned short)arg1;
- (_Bool)isPurpleBuddyAccount;
- (_Bool)isDefaultNickname;
- (_Bool)isLocalPlayer;
- (unsigned short)numberOfRequests;
- (id)minimalInternal;
- (unsigned short)numberOfChallenges;
- (unsigned short)numberOfTurns;
- (int)defaultFamiliarity;
- (_Bool)isFriend;
- (_Bool)isFindable;
- (_Bool)isPhotoPending;
- (id)facebookUserID;
- (void)setFacebookUserID:(id)arg1;
- (void)setPurpleBuddyAccount:(_Bool)arg1;
- (void)setDefaultNickname:(_Bool)arg1;
- (void)setUnderage:(_Bool)arg1;
- (void)setFindable:(_Bool)arg1;
- (void)setPhotoPending:(_Bool)arg1;
- (void)setNumberOfTurns:(unsigned short)arg1;
- (void)setNumberOfChallenges:(unsigned short)arg1;

@end
