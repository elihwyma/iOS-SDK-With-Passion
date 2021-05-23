/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNActionTargetState : NSObject

{
    _Bool usesEuler;
    float opacity;
    struct SCNVector3 position;
    struct SCNVector3 euler;
    struct SCNVector3 scale;
    struct SCNVector4 rotation;
}

@property (nonatomic) struct SCNVector3 position;
@property (nonatomic) struct SCNVector3 euler;
@property (nonatomic) struct SCNVector3 scale;
@property (nonatomic) struct SCNVector4 rotation;
@property (nonatomic) _Bool usesEuler;
@property (nonatomic) float opacity;

@end
