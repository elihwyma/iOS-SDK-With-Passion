/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactsEnvironment, CoreTelephonyClient, NSMapTable, NSString, TUCallProviderManager;

@protocol OS_dispatch_queue;

@interface CNGeminiManager : NSObject

{
    CNContactsEnvironment *_environment;
    CoreTelephonyClient *_coreTelephonyClient;
    TUCallProviderManager *_callProviderManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_delegateToQueue;
    unsigned long long _dataSourceExclusions;
}

@property (retain, nonatomic) CNContactsEnvironment *environment;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) TUCallProviderManager *callProviderManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMapTable *delegateToQueue;
@property (nonatomic) unsigned long long dataSourceExclusions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)deviceSupportsGemini;
+ (id)descriptorForRequiredKeys;
+ (_Bool)useFakeData;
+ (id)cellularPlanManager;
+ (id)channelStringFromSenderIdentity:(id)arg1;

- (id)init;
- (void)removeDelegate:(id)arg1;
- (void)subscriptionInfoDidChange;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)bestSenderIdentityForContact:(id)arg1 error:(id *)arg2;
- (id)bestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id *)arg3;
- (id)initWithEnvironment:(id)arg1 coreTelephonyClient:(id)arg2 callProviderManager:(id)arg3;
- (void)danglingPlansDidUpdate:(id)arg1;
- (id)fetchedSenderIdentitiesWithError:(id *)arg1;
- (id)defaultSenderIdentityForInteractionsFromSenderIdentities:(id)arg1;
- (id)fakeSenderIdentities;
- (id)geminiResultForContact:(id)arg1 substituteDefaultForDangling:(_Bool)arg2 error:(id *)arg3;
- (id)contactForPhoneString:(id)arg1 contactStore:(id)arg2;
- (id)remoteGeminiResultForContact:(id)arg1 substituteDefaultForDangling:(_Bool)arg2 error:(id *)arg3;
- (id)channelsByIdentifierIncludingDanglingPlans:(_Bool)arg1 defaultChannel:(id *)arg2 availableChannels:(id *)arg3;
- (id)channelForPreferredChannelString:(id)arg1 fromChannels:(id)arg2 synthesizeMissingChannels:(_Bool)arg3;
- (id)bestChannelIdentifierForPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2 defaultChannelIdentifier:(id)arg3;
- (id)geminiResultForHandle:(id)arg1 contactStore:(id)arg2 substituteDefaultForDangling:(_Bool)arg3 error:(id *)arg4;
- (id)mostRecentChannelIdentifierForPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2;
- (id)channelIdentifierForMostRecentCallFromPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2;
- (id)channelIdentifierForMostRecentSMSFromPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2;
- (id)channelForFavoritesEntry:(id)arg1 includeDanglingChannels:(_Bool)arg2 error:(id *)arg3;
- (id)fetchedSubscriptionForSenderIdentity:(id)arg1;
- (_Bool)remapContactsHavingPreferredChannelIdentifier:(id)arg1 toPreferredChannelIdentifier:(id)arg2 contactStore:(id)arg3 error:(id *)arg4;
- (_Bool)remapRecentCallsHavingChannelIdentifier:(id)arg1 toChannelIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)remapMessagesHavingChannelIdentifier:(id)arg1 toChannelIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)isReferencedByContactsForSenderLabelIdentifier:(id)arg1 store:(id)arg2;
- (_Bool)isReferencedByMessagesForSenderLabelIdentifier:(id)arg1;
- (_Bool)isReferencedByCallHistoryForSenderLabelIdentifier:(id)arg1;
- (void)notifyDelegateOfChannelUpdates;
- (id)fetchedSubscriptionsWithError:(id *)arg1;
- (void)providersChangedForProviderManager:(id)arg1;
- (id)initWithCallProviderManager:(id)arg1;
- (id)channelForContact:(id)arg1 error:(id *)arg2;
- (id)remoteBestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id *)arg3;
- (id)geminiResultForContact:(id)arg1 error:(id *)arg2;
- (id)geminiResultForHandle:(id)arg1 contactStore:(id)arg2 error:(id *)arg3;
- (id)senderIdentityMatchingUUID:(id)arg1 fromSenderIdentities:(id)arg2;
- (id)senderIdentityMatchingPhoneNumber:(id)arg1 fromSenderIdentities:(id)arg2;
- (id)channelForFavoritesEntry:(id)arg1 error:(id *)arg2;
- (id)bestSenderIdentityForFavoritesEntry:(id)arg1 error:(id *)arg2;
- (id)badgeLabelForSenderIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)remapChannelIdentifier:(id)arg1 toIdentifier:(id)arg2 error:(id *)arg3;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2;
- (_Bool)isReferencedSenderLabelIdentifier:(id)arg1;
- (id)bestSubscriptionForContact:(id)arg1 error:(id *)arg2;
- (id)bestSubscriptionForHandle:(id)arg1 contactStore:(id)arg2 error:(id *)arg3;
- (id)badgeLabelForSubscription:(id)arg1 error:(id *)arg2;

@end
