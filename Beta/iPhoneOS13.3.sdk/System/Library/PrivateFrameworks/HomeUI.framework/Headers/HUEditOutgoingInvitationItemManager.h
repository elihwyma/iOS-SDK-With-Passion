/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFStaticItem, HMOutgoingHomeInvitation, NSString;

@interface HUEditOutgoingInvitationItemManager : HFItemManager

{
    HFStaticItem *_inviteAgainItem;
    HFStaticItem *_removeItem;
}

@property (retain, nonatomic) HFStaticItem *inviteAgainItem;
@property (retain, nonatomic) HFStaticItem *removeItem;
@property (nonatomic, readonly) HMOutgoingHomeInvitation *outgoingInvitation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_removeTitleForInvitationState:(long long)arg1;

@end
