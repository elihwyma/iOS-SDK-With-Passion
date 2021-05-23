/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray;

@interface SXComponentDependencyResolver : NSObject

{
    NSArray *_solvedComponentNodes;
    NSMutableArray *_componentNodes;
    NSDictionary *_mappedComponentNodes;
}

@property (nonatomic, readonly) NSArray *solvedComponentNodes;
@property (nonatomic, readonly) NSMutableArray *componentNodes;
@property (nonatomic, readonly) NSDictionary *mappedComponentNodes;

- (id)debugDescription;
- (void)addDependency:(id)arg1;
- (void)reset;
- (id)initWithComponentIdentifiers:(id)arg1;
- (id)solvableOrder;
- (id)componentNodeForComponentIdentifier:(id)arg1 andAttribute:(long long)arg2;
- (id)componentNodesDependentOnComponentNode:(id)arg1;
- (id)createComponentNodesForComponentIdentifiers:(id)arg1;
- (void)addComponentNode:(id)arg1;
- (id)solvedOrderForComponentNodes:(id)arg1;
- (void)resolveStack:(id)arg1 withSolvedNodes:(id)arg2;

@end
