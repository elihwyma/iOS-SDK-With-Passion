/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLMaterialPropertyNode.h>

@class NSArray, NSMutableArray;

@interface MDLMaterialPropertyGraph : MDLMaterialPropertyNode

{
    NSArray *_nodes;
    NSArray *_connections;
    NSMutableArray *_finalNodes;
}

@property (nonatomic, readonly) NSArray *nodes;
@property (nonatomic, readonly) NSArray *connections;

- (id)initWithNodes:(id)arg1 connections:(id)arg2;
- (void)evaluate;

@end
