/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, PGGraphMeaningNode;

@interface PGZeroKeywordMapping : NSObject

{
    PGGraphMeaningNode *_displayNode;
    NSArray *_mappedMeaningNodes;
}

@property (nonatomic, readonly) PGGraphMeaningNode *displayNode;
@property (nonatomic, readonly) NSArray *mappedMeaningNodes;

- (id)initWithDisplayNode:(id)arg1 mappedMeaningNodes:(id)arg2;

@end
