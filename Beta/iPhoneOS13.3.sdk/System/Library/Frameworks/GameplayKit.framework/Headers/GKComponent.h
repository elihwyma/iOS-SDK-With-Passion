/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class GKComponentSystem, GKEntity, NSString;

@interface GKComponent : NSObject

{
    GKEntity *_entity;
    int _usesPerComponentUpdateCount;
    GKComponentSystem *_componentSystem;
    NSString *_componentName;
}

@property (nonatomic) _Bool usesPerComponentUpdate;
@property (nonatomic) GKComponentSystem *componentSystem;
@property (nonatomic) NSString *componentName;
@property (weak, nonatomic, readonly) GKEntity *entity;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)updateWithDeltaTime:(double)arg1;
- (void)didAddToEntity;
- (void)willRemoveFromEntity;

@end
