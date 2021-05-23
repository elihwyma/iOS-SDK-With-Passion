/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString, PGGraphEdge, PGGraphNode;

@interface PGLocationTitleComponent : NSObject

{
    NSMutableSet *_addressNodes;
    float _weight;
    PGGraphNode *_node;
    PGGraphEdge *_edge;
    double _timestampStart;
    unsigned long long _type;
    NSString *_personName;
}

@property (retain, nonatomic) PGGraphNode *node;
@property (retain, nonatomic) PGGraphEdge *edge;
@property (retain, nonatomic) NSSet *addressNodes;
@property (nonatomic) unsigned long long type;
@property (nonatomic) NSString *personName;
@property (nonatomic, readonly) double timestampStart;
@property (nonatomic, readonly) float weight;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)addAddressNode:(id)arg1;
- (_Bool)canMergeWithTitleComponent:(id)arg1;
- (void)updateWithMomentNodes:(id)arg1;

@end
