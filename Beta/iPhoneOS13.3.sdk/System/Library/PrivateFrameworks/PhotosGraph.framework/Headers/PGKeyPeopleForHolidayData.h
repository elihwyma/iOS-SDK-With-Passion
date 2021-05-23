/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, PGGraphNode, PGGraphPersonNode;

@interface PGKeyPeopleForHolidayData : NSObject

{
    NSMutableSet *_holidayRules;
    PGGraphNode *_socialGroupNode;
    PGGraphPersonNode *_personNode;
    NSMutableSet *_momentNodes;
}

@property (retain, nonatomic) NSMutableSet *holidayRules;
@property (retain, nonatomic) PGGraphNode *socialGroupNode;
@property (retain, nonatomic) PGGraphPersonNode *personNode;
@property (retain, nonatomic) NSMutableSet *momentNodes;
@property (readonly) double score;
@property (readonly) NSString *uuid;

- (id)init;
- (id)initWithSocialGroupNode:(id)arg1;
- (id)initWithPersonNode:(id)arg1;

@end
