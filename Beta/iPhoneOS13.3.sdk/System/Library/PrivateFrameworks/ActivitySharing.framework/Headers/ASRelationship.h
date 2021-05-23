/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@class ASCodableCloudKitRelationship, CKRecord, CKRecordID, NSArray, NSDate, NSSet, NSString, NSUUID;

@interface ASRelationship : NSObject

{
    _Bool _isFriendshipActive;
    _Bool _isMuteEnabled;
    _Bool _hasIncomingInviteRequest;
    _Bool _hasOutgoingInviteRequest;
    _Bool _isAwaitingInviteResponse;
    _Bool _hasIncomingCompetitionRequest;
    _Bool _hasOutgoingCompetitionRequest;
    _Bool _hasIgnoredCompetitionRequest;
    _Bool _isAwaitingCompetitionResponse;
    _Bool _isCompetitionActive;
    _Bool _hasCompletedCompetition;
    _Bool _isHidingActivityData;
    _Bool _sentInviteResponse;
    unsigned int _supportedPhoneFeatures;
    unsigned int _supportedWatchFeatures;
    long long _version;
    NSUUID *_UUID;
    NSString *_incomingHandshakeToken;
    NSString *_outgoingHandshakeToken;
    NSString *_cloudKitAddress;
    NSSet *_addresses;
    NSString *_preferredReachableAddress;
    NSString *_preferredReachableService;
    CKRecord *_systemFieldsOnlyRecord;
    CKRecordID *_relationshipShareID;
    CKRecordID *_remoteRelationshipShareID;
    CKRecordID *_remoteActivityDataShareID;
    NSArray *_relationshipEvents;
    NSDate *_dateForLatestOutgoingCompetitionRequest;
    NSDate *_dateForLatestIncomingCompetitionRequest;
    NSDate *_dateForLatestIgnoredCompetitionRequest;
    NSDate *_dateForLatestDataHidden;
    NSDate *_dateForLatestOutgoingInviteRequest;
    NSDate *_dateForLatestRelationshipStart;
    NSDate *_dateActivityDataInitiallyBecameVisible;
}

@property (nonatomic, readonly) ASCodableCloudKitRelationship *codableRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool isFriendshipActive;
@property (nonatomic) _Bool isMuteEnabled;
@property (nonatomic) _Bool hasIncomingInviteRequest;
@property (nonatomic) _Bool hasOutgoingInviteRequest;
@property (nonatomic) _Bool isAwaitingInviteResponse;
@property (nonatomic) _Bool sentInviteResponse;
@property (nonatomic) _Bool hasIncomingCompetitionRequest;
@property (nonatomic) _Bool hasOutgoingCompetitionRequest;
@property (nonatomic) _Bool hasIgnoredCompetitionRequest;
@property (nonatomic) _Bool isCompetitionActive;
@property (nonatomic) _Bool isAwaitingCompetitionResponse;
@property (nonatomic) _Bool hasCompletedCompetition;
@property (retain, nonatomic) NSDate *dateForLatestOutgoingInviteRequest;
@property (retain, nonatomic) NSDate *dateForLatestDataHidden;
@property (retain, nonatomic) NSDate *dateForLatestRelationshipStart;
@property (retain, nonatomic) NSDate *dateActivityDataInitiallyBecameVisible;
@property (retain, nonatomic) NSDate *dateForLatestOutgoingCompetitionRequest;
@property (retain, nonatomic) NSDate *dateForLatestIncomingCompetitionRequest;
@property (retain, nonatomic) NSDate *dateForLatestIgnoredCompetitionRequest;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSString *incomingHandshakeToken;
@property (retain, nonatomic) NSString *outgoingHandshakeToken;
@property (retain, nonatomic) NSString *cloudKitAddress;
@property (retain, nonatomic) NSSet *addresses;
@property (retain, nonatomic) NSString *preferredReachableAddress;
@property (retain, nonatomic) NSString *preferredReachableService;
@property (retain, nonatomic) CKRecord *systemFieldsOnlyRecord;
@property (retain, nonatomic) CKRecordID *relationshipShareID;
@property (retain, nonatomic) CKRecordID *remoteRelationshipShareID;
@property (retain, nonatomic) CKRecordID *remoteActivityDataShareID;
@property (copy, nonatomic) NSArray *relationshipEvents;
@property (nonatomic) unsigned int supportedPhoneFeatures;
@property (nonatomic) unsigned int supportedWatchFeatures;
@property (nonatomic, readonly) _Bool isActivityDataVisible;
@property (nonatomic, readonly) _Bool isHidingActivityData;
@property (nonatomic, readonly) NSDate *timestampForMostRecentRelationshipEvent;
@property (nonatomic, readonly) unsigned long long currentRelationshipEventAnchor;

+ (id)relationshipWithCodableRelationship:(id)arg1 version:(long long)arg2;
+ (void)_relationshipWithRecord:(id)arg1 relationshipEventRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)relationshipsWithRelationshipAndEventRecords:(id)arg1;
+ (id)relationshipWithCodableRelationshipContainer:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_nextAnchor;
- (id)recordWithZoneID:(id)arg1;
- (id)codableRelationshipContainerIncludingCloudKitFields:(_Bool)arg1;
- (void)_updateCurrentRelationshipState;
- (_Bool)isEqualToRelationship:(id)arg1;
- (void)_setRelationshipEvents:(id)arg1;
- (void)insertEvents:(id)arg1;
- (void)_clearRelationshipState;
- (void)_updateDateActivityDataBecameVisibleWithDate:(id)arg1;
- (void)_updateDateFriendshipBeganWithDate:(id)arg1;
- (void)insertEventWithType:(unsigned short)arg1;
- (id)relationshipSnapshotForDate:(id)arg1;
- (void)traverseRelationshipHistoryStartingAtEventWithAnchor:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)supportsCompetitions;

@end
