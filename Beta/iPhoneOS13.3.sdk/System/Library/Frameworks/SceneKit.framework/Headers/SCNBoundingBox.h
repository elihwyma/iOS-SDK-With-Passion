/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNBoundingBox : NSObject

{
    struct SCNVector3 min;
    struct SCNVector3 max;
}

@property (nonatomic) struct SCNVector3 min;
@property (nonatomic) struct SCNVector3 max;

- (id)description;

@end
