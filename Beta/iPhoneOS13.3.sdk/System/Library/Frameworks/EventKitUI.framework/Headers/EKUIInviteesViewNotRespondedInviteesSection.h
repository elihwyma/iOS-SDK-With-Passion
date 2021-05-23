/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

#import <EventKitUI/Swift-Protocol.h>

@class EKEvent, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface EKUIInviteesViewNotRespondedInviteesSection : NSObject <Swift>

{
    _Bool _canSeeAttendeeStatuses;
    _Bool _editable;
    CDUnknownBlockType _participantTapped;
    CDUnknownBlockType _participantRemoved;
    CDUnknownBlockType _addInviteesTapped;
    CDUnknownBlockType _participantSetRole;
    NSMutableArray *_participants;
    EKEvent *_event;
    NSString *_cachedInviteeCellReuseIdentifier;
    NSString *_cachedAddInviteeCellReuseIdentifier;
    unsigned long long _reuseIdentifierVersion;
    NSOperationQueue *_availabilityRequestsQueue;
    NSMutableDictionary *_participantAddressesToAvailabilityType;
    NSMutableDictionary *_participantAddressesToParticipantIndex;
    NSMutableSet *_participantAddressesForInFlightAvailabilityOperations;
    CDUnknownBlockType _tableViewCellHook;
}

@property (retain, nonatomic) NSMutableArray *participants;
@property (retain, nonatomic) EKEvent *event;
@property (nonatomic) _Bool canSeeAttendeeStatuses;
@property (retain, nonatomic) NSString *cachedInviteeCellReuseIdentifier;
@property (retain, nonatomic) NSString *cachedAddInviteeCellReuseIdentifier;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (nonatomic) _Bool editable;
@property (retain, nonatomic) NSOperationQueue *availabilityRequestsQueue;
@property (retain, nonatomic) NSMutableDictionary *participantAddressesToAvailabilityType;
@property (retain, nonatomic) NSMutableDictionary *participantAddressesToParticipantIndex;
@property (retain, nonatomic) NSMutableSet *participantAddressesForInFlightAvailabilityOperations;
@property (copy, nonatomic) CDUnknownBlockType tableViewCellHook;
@property (copy, nonatomic) CDUnknownBlockType participantTapped;
@property (copy, nonatomic) CDUnknownBlockType participantRemoved;
@property (copy, nonatomic) CDUnknownBlockType addInviteesTapped;
@property (copy, nonatomic) CDUnknownBlockType participantSetRole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_participantAddressForParticipant:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)cancelOutstandingOperations;
- (unsigned long long)numberOfRows;
- (id)headerTitle;
- (_Bool)_isValidRow:(long long)arg1;
- (id)debugTitle;
- (_Bool)sectionShouldBeShown;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (_Bool)canSelectRow:(id)arg1;
- (void)selectRow:(id)arg1;
- (double)estimatedHeightForRow:(id)arg1;
- (_Bool)canEditRow:(id)arg1;
- (long long)editingStyleForRow:(id)arg1;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (id)actionsForRow:(id)arg1;
- (void)updateWithEvent:(id)arg1 editable:(_Bool)arg2 fromDetail:(_Bool)arg3;
- (_Bool)_isAddInviteesRow:(long long)arg1;
- (void)_updateCell:(id)arg1 forParticipantAtIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)_removeParticipantAtIndexPath:(id)arg1;
- (void)_setParticipantIndex:(id)arg1 forParticipantAddress:(id)arg2;
- (void)_addAddressToSetOfAddressesToInflightOperations:(id)arg1;
- (_Bool)_setOfAddressesToInflightOperationsContainsAddress:(id)arg1;
- (void)_setAvailabilityType:(id)arg1 forParticipantAddress:(id)arg2;
- (void)_removeAddressFromSetOfAddressesToInflightOperations:(id)arg1;
- (void)_updateCellForParticipantWithAddress:(id)arg1;
- (void)_removeAddressFromDictionaryOfAddressesToAvailabilityType:(id)arg1;
- (void)_removeAddressFromDictionaryOfAddressesToParticipantIndex:(id)arg1;
- (id)_lookUpParticipantIndexForParticipantAddress:(id)arg1;
- (id)_lookUpAvailabilityTypeForParticipantAddress:(id)arg1;

@end
