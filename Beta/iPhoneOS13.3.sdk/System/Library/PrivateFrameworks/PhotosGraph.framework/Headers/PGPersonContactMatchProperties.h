/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface PGPersonContactMatchProperties : NSObject

{
    _Bool _contactFaceprintMatch;
    NSString *_contactIdentifier;
    unsigned long long _numberOfWeakBirthdayMomentsAroundBirthdayDate;
    unsigned long long _numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
    unsigned long long _numberOfMomentsAtAddress;
    unsigned long long _numberOfMomentsAtMentionedAddress;
    unsigned long long _numberOfMomentsOverlappingWithCalendarEvents;
    unsigned long long _numberOfAppearancesInSharedAssets;
    unsigned long long _numberOfCMMSharedMomentsInMessageConversations;
    double _faceTimeFaceprintConfidence;
    NSMutableSet *_socialGroupDescriptions;
    NSMutableSet *_messageGroupDescriptions;
    double _socialGroupsOverlapScore;
    unsigned long long _numberOfMatchedRelationships;
    NSMutableSet *_matchedRelationships;
    unsigned long long _genderMatch;
    double _matchScore;
    double _birthdayScore;
    double _potentialBirthdayScore;
    double _addressScore;
    double _mentionedAddressScore;
    double _calendarScore;
    double _sharedAssetScore;
    double _sharedCMMScore;
    double _relationshipScore;
    double _scoreAfterMessagePenalty;
}

@property (nonatomic) unsigned long long numberOfWeakBirthdayMomentsAroundBirthdayDate;
@property (nonatomic) unsigned long long numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
@property (nonatomic) unsigned long long numberOfMomentsAtAddress;
@property (nonatomic) unsigned long long numberOfMomentsAtMentionedAddress;
@property (nonatomic) unsigned long long numberOfMomentsOverlappingWithCalendarEvents;
@property (nonatomic) unsigned long long numberOfAppearancesInSharedAssets;
@property (nonatomic) unsigned long long numberOfCMMSharedMomentsInMessageConversations;
@property (nonatomic) _Bool contactFaceprintMatch;
@property (nonatomic) double faceTimeFaceprintConfidence;
@property (retain, nonatomic) NSMutableSet *socialGroupDescriptions;
@property (retain, nonatomic) NSMutableSet *messageGroupDescriptions;
@property (nonatomic) double socialGroupsOverlapScore;
@property (nonatomic) unsigned long long numberOfMatchedRelationships;
@property (retain, nonatomic) NSMutableSet *matchedRelationships;
@property (nonatomic) unsigned long long genderMatch;
@property (nonatomic) double birthdayScore;
@property (nonatomic) double potentialBirthdayScore;
@property (nonatomic) double addressScore;
@property (nonatomic) double mentionedAddressScore;
@property (nonatomic) double calendarScore;
@property (nonatomic) double sharedAssetScore;
@property (nonatomic) double sharedCMMScore;
@property (nonatomic) double relationshipScore;
@property (nonatomic) double scoreAfterMessagePenalty;
@property (nonatomic, readonly) double matchScore;
@property (nonatomic, readonly) NSString *contactIdentifier;

- (id)description;
- (id)initWithContactIdentifier:(id)arg1;
- (void)registerBirthdayWithPeopleCount:(unsigned long long)arg1;
- (void)registerPotentialBirthdayWithPeopleCount:(unsigned long long)arg1;
- (void)registerMomentAtAddressWithPeopleCount:(unsigned long long)arg1;
- (void)registerMomentAtMentionedAddressWithPeopleCount:(unsigned long long)arg1;
- (void)registerSharedAssetAppearanceWithPeopleCount:(unsigned long long)arg1;
- (void)registerContactFaceprintMatch;
- (void)registerFacetimeFaceprintMatchConfidence:(double)arg1;
- (void)registerCalendarEventWithPeopleCount:(unsigned long long)arg1;
- (void)registerSocialGroupAndMessageGroupMatchScore:(double)arg1 debugSocialGroupsDescription:(id)arg2 debugMessageGroupsDescription:(id)arg3;
- (void)registerCMMWithPeopleCount:(unsigned long long)arg1;
- (void)registerMatchedRelationship:(unsigned long long)arg1 withPeopleCount:(unsigned long long)arg2;
- (void)registerGenderMatch:(unsigned long long)arg1;
- (void)registerMessageFrequencyPenaltyNewScore:(double)arg1;
- (id)_stringsForRelationshipMatch;
- (id)_socialGroupsDescription;
- (id)_messageGroupsDescription;
- (id)_relationshipsDescription;
- (id)edgeProperties;
- (void)setPersonContactMatchScore:(double)arg1;

@end
