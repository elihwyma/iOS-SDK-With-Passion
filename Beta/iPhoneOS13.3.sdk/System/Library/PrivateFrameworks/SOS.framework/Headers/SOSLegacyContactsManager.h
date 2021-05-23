/*
 Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

#import <Foundation/NSObject.h>

@class FKFriendsManager;

@interface SOSLegacyContactsManager : NSObject

{
    FKFriendsManager *_friendsManager;
}

@property (retain, nonatomic) FKFriendsManager *friendsManager;
@property (nonatomic, readonly) _Bool SOSLegacyContactsExist;

+ (id)contactStore;
+ (_Bool)authorizedToUseContactStore;
+ (void)preloadContactStoreIfNecessary;

- (id)init;
- (void)dealloc;
- (void)contactStoreDidChange;
- (id)SOSLegacyContacts;
- (id)_SOSFriends;
- (id)_SOSDestinationsForFriend:(id)arg1;
- (id)_SOSFormattedDestinationForFriend:(id)arg1 withDestinationNumber:(id)arg2;
- (id)_contactFromFriend:(id)arg1;
- (id)SOSLegacyContactsDestinations;

@end
