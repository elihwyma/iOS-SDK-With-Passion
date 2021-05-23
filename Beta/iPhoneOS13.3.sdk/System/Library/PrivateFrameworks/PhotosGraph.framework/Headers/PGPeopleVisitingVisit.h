/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, PGGraphNode;

@interface PGPeopleVisitingVisit : NSObject

{
    NSMutableArray *_momentNodes;
    _Bool _hasVeryCloseMoments;
    PGGraphNode *_addressNode;
}

@property (readonly) PGGraphNode *addressNode;
@property (readonly) NSArray *momentNodes;
@property (readonly) _Bool isValid;
@property (readonly) _Bool matchesFarVisitCriteria;
@property (readonly) _Bool matchesCloseVisitCriteria;

- (id)description;
- (void)addMomentNode:(id)arg1 isVeryClose:(_Bool)arg2;
- (id)initWithAddressNode:(id)arg1;

@end
