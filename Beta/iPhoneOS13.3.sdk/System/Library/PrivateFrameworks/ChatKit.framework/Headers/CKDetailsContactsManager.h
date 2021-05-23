/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKConversation, NSArray, NSDictionary, NSString;

@protocol CKDetailsContactsManagerDelegate;

@interface CKDetailsContactsManager : NSObject

{
    NSArray *_contactsViewModels;
    id <CKDetailsContactsManagerDelegate> _delegate;
    CKConversation *_conversation;
    NSString *_serviceAvailabilityKey;
    NSDictionary *_facetimeIDStatuses;
    NSDictionary *_facetimeAudioIDStatuses;
}

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) NSString *serviceAvailabilityKey;
@property (retain, nonatomic) NSDictionary *facetimeIDStatuses;
@property (retain, nonatomic) NSDictionary *facetimeAudioIDStatuses;
@property (copy, nonatomic) NSArray *contactsViewModels;
@property (copy, nonatomic, readonly) NSArray *contacts;
@property (weak, nonatomic) id <CKDetailsContactsManagerDelegate> delegate;

- (void)dealloc;
- (_Bool)_isFaceTimeAudioAvailable;
- (void)_conversationJoinStateDidChange:(id)arg1;
- (id)initWithConversation:(id)arg1 delegate:(id)arg2;
- (void)startCommunicationForEntity:(id)arg1 action:(unsigned long long)arg2 address:(id)arg3 usePreferredRouteIfAvailable:(_Bool)arg4;
- (void)_handleAddressBookChange:(id)arg1;
- (void)setPreferredCallService:(unsigned long long)arg1 forID:(id)arg2;
- (void)startCommunicationForEntity:(id)arg1 action:(unsigned long long)arg2 address:(id)arg3;
- (void)_handleConversationRecipientsDidChange:(id)arg1;
- (void)_handleLocationChanged:(id)arg1;
- (void)_handleConversationPendingRecipientsDidChange:(id)arg1;
- (void)_updateViewModels;
- (void)_refreshFaceTimeIDSStatusWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_showMessageButtonForEntity:(id)arg1;
- (_Bool)_showFaceTimeVideoButtonForEntity:(id)arg1;
- (_Bool)_showPhoneButtonForEntity:(id)arg1;
- (void)_startMessageWithEntity:(id)arg1;
- (void)_startCommunicationForEntity:(id)arg1 usePreferredRouteIfAvailable:(_Bool)arg2;
- (void)_startFacetimeCommunicationForEntity:(id)arg1 audioOnly:(_Bool)arg2;
- (void)_startCallWithEntity:(id)arg1 phoneAddress:(id)arg2;
- (_Bool)_isTelephonyDevice;
- (unsigned long long)preferredCallServiceForID:(id)arg1;
- (long long)_facetimeAudioIDStatusForEntity:(id)arg1;
- (_Bool)_hasLinkedTelephoneNumbersForEntity:(id)arg1;
- (_Bool)_isFaceTimeVideoAvailable;
- (long long)_facetimeIDStatusForEntity:(id)arg1;
- (_Bool)_preferredRoutesDisabledViaServerBag;
- (id)_preferredCallServiceToIDMap;
- (void)_setPreferredCallServiceToIDMap:(id)arg1;
- (_Bool)_conversationHasLeft;

@end
