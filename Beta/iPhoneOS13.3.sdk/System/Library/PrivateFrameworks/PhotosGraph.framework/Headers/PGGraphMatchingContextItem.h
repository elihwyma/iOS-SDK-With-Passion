/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDate, NSSet, PGGraphNode;

@interface PGGraphMatchingContextItem : NSObject

{
    double _score;
    unsigned long long _relatedType;
    unsigned long long _criteria;
    PGGraphNode *_referenceNode;
    PGGraphNode *_matchedNode;
    NSSet *_contextNodes;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
}

@property (nonatomic, readonly) PGGraphNode *referenceNode;
@property (nonatomic, readonly) PGGraphNode *matchedNode;
@property (nonatomic, readonly) NSSet *contextNodes;
@property (nonatomic, readonly) unsigned long long relatedType;
@property (nonatomic) double score;
@property (nonatomic) unsigned long long criteria;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *localEndDate;

+ (id)contextItemWithRelatedType:(unsigned long long)arg1 score:(double)arg2 criteria:(unsigned long long)arg3 referenceNode:(id)arg4 matchedNode:(id)arg5 contextNodes:(id)arg6;
+ (unsigned long long)criteriaForLocationLabel:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (_Bool)isEqualToContextItem:(id)arg1;
- (id)initWithRelatedType:(unsigned long long)arg1 score:(double)arg2 criteria:(unsigned long long)arg3 referenceNode:(id)arg4 matchedNode:(id)arg5 contextNodes:(id)arg6;
- (void)_findLocalStartAndEndDate;
- (id)_matchedAddressNode;

@end
