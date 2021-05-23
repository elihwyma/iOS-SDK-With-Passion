/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PGGraph;

@interface PGGuessWhoRelationshipMetricEvent : NSObject

{
    NSString *_identifier;
    NSDictionary *_payload;
    PGGraph *_graph;
    unsigned long long _numberOfPeople;
    unsigned long long _numberOfInferredFamilyMembers;
    unsigned long long _numberOfInferredFriends;
    unsigned long long _numberOfInferredParents;
    unsigned long long _numberOfInferredCoworkers;
    unsigned long long _numberOfInferredPartners;
    unsigned long long _numberOfInferredChildren;
    unsigned long long _numberOfFamilyHolidaySignalRegistrations;
    unsigned long long _numberOfParentContactNameSignalRegistrations;
    unsigned long long _numberOfSameFamilyNameSignalRegistrations;
    unsigned long long _numberOfHomeMomentsSignalRegistrations;
    unsigned long long _numberOfAnniversaryDateSignalRegistrations;
    unsigned long long _numberOfTopTwoPersonSocialGroupSignalRegistrations;
    unsigned long long _numberOfLoveEmojisSignalRegistrations;
    unsigned long long _numberOfTopPersonSignalRegistrations;
    unsigned long long _numberOfFriendNightOutSignalRegistrations;
    unsigned long long _numberOfPartnerTripSignalRegistrations;
    unsigned long long _numberOfFriendsFamilyTripSignalRegistrations;
    unsigned long long _numberOfWeekendSignalRegistrations;
    unsigned long long _numberOfCoworkersAtWorkSignalRegistrations;
    unsigned long long _numberOfCoworkerCalendarSignalRegistrations;
    unsigned long long _numberOfAgeDifferentThanMeSignalRegistrations;
    unsigned long long _numberOfParentGrandparentOldSignalRegistrations;
    unsigned long long _numberOfFamilyHolidaySignalRegistrationsInCorrectInference;
    unsigned long long _numberOfParentContactNameSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfSameFamilyNameSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfHomeMomentsSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfAnniversaryDateSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfLoveEmojisSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfTopPersonSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfFriendNightOutSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfPartnerTripSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfWeekendSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfCoworkerCalendarSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference;
    unsigned long long _numberOfParentGrandparentOldSignalRegistrationsInCorrectInference;
}

@property (retain, nonatomic) PGGraph *graph;
@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) unsigned long long numberOfInferredFamilyMembers;
@property (nonatomic) unsigned long long numberOfInferredFriends;
@property (nonatomic) unsigned long long numberOfInferredParents;
@property (nonatomic) unsigned long long numberOfInferredCoworkers;
@property (nonatomic) unsigned long long numberOfInferredPartners;
@property (nonatomic) unsigned long long numberOfInferredChildren;
@property (nonatomic) unsigned long long numberOfFamilyHolidaySignalRegistrations;
@property (nonatomic) unsigned long long numberOfParentContactNameSignalRegistrations;
@property (nonatomic) unsigned long long numberOfSameFamilyNameSignalRegistrations;
@property (nonatomic) unsigned long long numberOfHomeMomentsSignalRegistrations;
@property (nonatomic) unsigned long long numberOfAnniversaryDateSignalRegistrations;
@property (nonatomic) unsigned long long numberOfTopTwoPersonSocialGroupSignalRegistrations;
@property (nonatomic) unsigned long long numberOfLoveEmojisSignalRegistrations;
@property (nonatomic) unsigned long long numberOfTopPersonSignalRegistrations;
@property (nonatomic) unsigned long long numberOfFriendNightOutSignalRegistrations;
@property (nonatomic) unsigned long long numberOfPartnerTripSignalRegistrations;
@property (nonatomic) unsigned long long numberOfFriendsFamilyTripSignalRegistrations;
@property (nonatomic) unsigned long long numberOfWeekendSignalRegistrations;
@property (nonatomic) unsigned long long numberOfCoworkersAtWorkSignalRegistrations;
@property (nonatomic) unsigned long long numberOfCoworkerCalendarSignalRegistrations;
@property (nonatomic) unsigned long long numberOfAgeDifferentThanMeSignalRegistrations;
@property (nonatomic) unsigned long long numberOfParentGrandparentOldSignalRegistrations;
@property (nonatomic) unsigned long long numberOfFamilyHolidaySignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfParentContactNameSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfSameFamilyNameSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfHomeMomentsSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfAnniversaryDateSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfLoveEmojisSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfTopPersonSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfFriendNightOutSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfPartnerTripSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfWeekendSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfCoworkerCalendarSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference;
@property (nonatomic) unsigned long long numberOfParentGrandparentOldSignalRegistrationsInCorrectInference;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithGraphManager:(id)arg1;
- (void)gatherMetricsWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)_incrementRelationshipSignalMetricsForRelationshipEdge:(id)arg1 inferredRelationshipCorrect:(_Bool)arg2;
- (id)_inferredRelationshipKeys;
- (id)_readableStringByRelationshipEdgeProperty;
- (id)_relationshipKeyForLabel:(id)arg1;

@end
