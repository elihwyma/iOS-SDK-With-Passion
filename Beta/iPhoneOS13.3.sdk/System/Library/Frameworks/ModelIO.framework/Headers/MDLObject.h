/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSString;

@protocol MDLObjectContainerComponent, MDLTransformComponent;

@interface MDLObject : NSObject

{
    MDLObject *_parent;
    NSMapTable *_components;
    MDLObject *_instance;
    _Bool _hidden;
    NSString *name;
    id <MDLObjectContainerComponent> _children;
}

@property (copy, nonatomic, readonly) NSArray *components;
@property (weak, nonatomic) MDLObject *parent;
@property (retain, nonatomic) MDLObject *instance;
@property (nonatomic, readonly) NSString *path;
@property (retain, nonatomic) id <MDLTransformComponent> transform;
@property (retain, nonatomic) id <MDLObjectContainerComponent> children;
@property (nonatomic) _Bool hidden;
@property (copy, nonatomic) NSString *name;

- (id)init;
- (id)description;
- (void)addChild:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)recursiveDescription;
- (struct)boundingBoxAtTime:(double)arg1;
- (void)setComponent:(id)arg1 forProtocol:(id)arg2;
- (id)componentConformingToProtocol:(id)arg1;
- (void)enumerateChildObjectsOfClass:(Class)arg1 root:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 stopPointer:(_Bool *)arg4;
- (id)objectAtPath:(id)arg1;

@end
