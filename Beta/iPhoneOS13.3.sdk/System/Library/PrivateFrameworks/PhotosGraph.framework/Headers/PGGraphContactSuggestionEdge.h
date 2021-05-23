/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphEdge.h>

@class NSString;

@interface PGGraphContactSuggestionEdge : PGGraphEdge

@property (nonatomic, readonly) unsigned long long numberOfMomentsAtHome;
@property (nonatomic, readonly) unsigned long long numberOfMomentsAtMentionedAddress;
@property (nonatomic, readonly) unsigned long long numberOfWeakBirthdayMomentsAroundBirthdayDate;
@property (nonatomic, readonly) unsigned long long numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
@property (nonatomic, readonly) unsigned long long numberOfMomentsOverlappingWithCalendarEvents;
@property (nonatomic, readonly) unsigned long long numberOfAppearancesInSharedAssets;
@property (nonatomic, readonly) unsigned long long numberOfCMMMoments;
@property (nonatomic, readonly) double facetimeFaceprintConfidence;
@property (nonatomic, readonly) _Bool contactFaceprintMatch;
@property (nonatomic, readonly) NSString *relationshipsDebug;
@property (nonatomic, readonly) unsigned long long numberOfMatchedRelationships;
@property (nonatomic, readonly) unsigned long long numberOfMatchedMessageGroups;
@property (nonatomic, readonly) double socialGroupsConfidence;
@property (nonatomic, readonly) NSString *socialGroupsDebug;
@property (nonatomic, readonly) NSString *messageGroupsDebug;
@property (nonatomic, readonly) _Bool personContactGenderMatch;
@property (nonatomic, readonly) _Bool personContactGenderMismatch;

- (id)description;
- (double)confidence;
- (unsigned long long)_genderMatch;
- (id)_stringForGenderMatch:(unsigned long long)arg1;
- (_Bool)isFilteredOut;
- (_Bool)isHighConfidence;
- (id)_readableStringForContactSuggestionProperty:(id)arg1;

@end
