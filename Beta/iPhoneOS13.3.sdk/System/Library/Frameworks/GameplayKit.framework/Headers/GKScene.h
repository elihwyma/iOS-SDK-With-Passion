/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@protocol GKSceneRootNodeType;

@interface GKScene : NSObject

{
    NSMutableArray *_entities;
    NSMutableDictionary *_graphs;
    id <GKSceneRootNodeType> _rootNode;
}

@property (nonatomic, readonly) NSArray *entities;
@property (retain, nonatomic) id <GKSceneRootNodeType> rootNode;
@property (nonatomic, readonly) NSDictionary *graphs;

+ (_Bool)supportsSecureCoding;
+ (id)_sceneWithFileNamed:(id)arg1 rootNode:(id)arg2;
+ (id)sceneWithFileNamed:(id)arg1 rootNode:(id)arg2;
+ (id)sceneWithFileNamed:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addEntity:(id)arg1;
- (void)removeEntity:(id)arg1;
- (void)addGraph:(id)arg1 name:(id)arg2;
- (void)removeGraph:(id)arg1;

@end
