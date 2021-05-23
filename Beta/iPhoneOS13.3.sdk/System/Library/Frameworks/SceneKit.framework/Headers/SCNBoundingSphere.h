/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNBoundingSphere : NSObject

{
    struct SCNVector3 center;
    double radius;
}

@property (nonatomic) struct SCNVector3 center;
@property (nonatomic) double radius;

- (id)description;

@end
