/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKComponent.h>

@class NSIndexPath, NSString, SKNode;

@interface GKSKNodeComponent : GKComponent

{
    NSIndexPath *_serializableNodeIndexPath;
    SKNode *_node;
}

@property (retain, nonatomic) SKNode *node;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSIndexPath *serializableNodeIndexPath;

+ (_Bool)supportsSecureCoding;
+ (id)componentWithNode:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setEntity:(id)arg1;
- (id)initWithNode:(id)arg1;
- (void)agentWillUpdate:(id)arg1;
- (void)agentDidUpdate:(id)arg1;

@end
