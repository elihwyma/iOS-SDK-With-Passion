/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSDate, NSString;

@interface PGGraphPersonNode : PGGraphNode

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *suggestedContactIdentifier;
@property (nonatomic, readonly) _Bool isVerified;
@property (nonatomic, readonly) _Bool isInferredChild;
@property (nonatomic, readonly) NSDate *birthdayDate;
@property (nonatomic, readonly) NSString *keywordDescription;
@property (readonly) _Bool isUserCreated;
@property (readonly) _Bool isFavorite;
@property (readonly) NSString *localIdentifier;
@property (readonly) NSString *contactIdentifier;
@property (readonly) unsigned long long gender;
@property (readonly) unsigned long long ageCategory;
@property (readonly) NSDate *birthdayDate;
@property (readonly) NSDate *potentialBirthdayDate;
@property (readonly) NSDate *anniversaryDate;
@property (readonly) _Bool isMemberOfMyFamily;
@property (readonly) _Bool isMyPartner;
@property (readonly) _Bool isMyChild;
@property (readonly) _Bool isMyParent;
@property (readonly) _Bool isMyMother;
@property (readonly) _Bool isMyFather;
@property (readonly) _Bool isMyCoworker;
@property (readonly) _Bool isMyFriend;
@property (readonly) _Bool isMyAcquaintance;

+ (unsigned long long)type;
+ (id)personScoreSortDescriptors;
+ (id)propertiesWithPerson:(id)arg1;
+ (id)identifyingPropertyKeysWithProperties:(id)arg1;

- (void)mergeProperties:(id)arg1;
- (id)associatedNodesForRemoval;
- (long long)compareToPerson:(id)arg1;
- (_Bool)isMeNode;
- (double)personScore;
- (_Bool)belongsToBestSocialGroups;
- (id)personMomentNodes;
- (id)personSocialGroupNodes;
- (void)personEnumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)personEnumerateSocialGroupNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)personEnumerateHomeOrWorkAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)personEnumerateBirthdayMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_hasConfirmedRelationshipLabel:(id)arg1;
- (void)enumerateContactSuggestionsSortedByWeightMatchingQuery:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_contactSuggestionEdge:(id)arg1 fitsQuery:(unsigned long long)arg2;
- (id)_contactSuggestionEdgesSortedByWeight;
- (id)stringDescription;

@end
