/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <KnowledgeGraphKit/MANode.h>

@class NSDateComponents;

@interface PGGraphNode : MANode

@property (retain, nonatomic) NSDateComponents *birthdayDateComponents;
@property (retain, nonatomic) NSDateComponents *potentialBirthdayDateComponents;
@property (retain, nonatomic) NSDateComponents *anniversaryDateComponents;

+ (id)addressNodesFromEventNodes:(id)arg1;
+ (id)sortEventsByDateSortDescriptors;
+ (id)_specialDateDateComponentsFromTimeInterval:(double)arg1;
+ (double)specialDateTimeIntervalForDateComponents:(id)arg1;
+ (id)_specialDateComponentsForDate:(id)arg1;
+ (double)specialDateTimeIntervalForDate:(id)arg1;
+ (id)stringValueForPartOfDay:(unsigned long long)arg1;
+ (unsigned long long)partOfDayForPartOfDayNode:(id)arg1;

- (id)name;
- (id)UUID;
- (unsigned long long)numberOfAssets;
- (id)nextEvent;
- (long long)timeValue;
- (double)graphScore;
- (id)_stringValueForPropertyWithKey:(id)arg1;
- (id)keywordDescription;
- (_Bool)isInteresting;
- (_Bool)isSmartInteresting;
- (unsigned long long)totalNumberOfPersons;
- (void)enumerateDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3 andBlock:(CDUnknownBlockType)arg4;
- (id)firstDeepNeighborWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3;
- (unsigned long long)countOfDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3;
- (id)deepNeighborsWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3;
- (id)nameAsSocialGroupNode;
- (_Bool)isFrequentSocialGroup;
- (void)_enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 excluding:(id)arg4 shouldStop:(_Bool *)arg5 block:(CDUnknownBlockType)arg6;
- (void)_enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 shouldStop:(_Bool *)arg4 block:(CDUnknownBlockType)arg5;
- (double)timestampUTCStart;
- (double)timestampUTCEnd;
- (double)timestampTZStart;
- (double)timestampTZEnd;
- (id)previousEvent;
- (struct CLLocationCoordinate2D)bestLocationCoordinate;
- (unsigned long long)partOfDay;
- (unsigned long long)significantPartsOfDay;
- (void)enumeratePartOfDayUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSignificantPartsOfDayUsingBlock:(CDUnknownBlockType)arg1;
- (id)matchingDescription;
- (id)bestAddressNode;
- (unsigned long long)_partOfDayWithThreshold:(float)arg1;
- (void)_enumeratePartOfDayWithThreshold:(float)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
