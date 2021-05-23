/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface GKGraphNode : NSObject

{
    NSMutableArray *_connectedNodes;
    struct GKCGraphNode *_cGraphNode;
}

@property (nonatomic, readonly) NSArray *connectedNodes;

+ (_Bool)supportsSecureCoding;
+ (id)node;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeConnection:(id)arg1;
- (float)costToNode:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (struct GKCGraphNode *)cGraphNode;
- (id)findPathToNode:(id)arg1;
- (void)deleteCGraphNode;
- (struct GKCGraphNode *)makeCGraphNode;
- (id)findPathFromNode:(id)arg1;
- (void)addConnectionsToNodes:(id)arg1 bidirectional:(_Bool)arg2;
- (id)mutConnectedNodes;
- (void)addConnection:(id)arg1 bidirectional:(_Bool)arg2;
- (void)removeConnectionsToNodes:(id)arg1 bidirectional:(_Bool)arg2;

@end
