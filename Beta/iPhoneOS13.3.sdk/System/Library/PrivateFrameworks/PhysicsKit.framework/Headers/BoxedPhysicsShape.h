/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface BoxedPhysicsShape : NSObject

{
    int shapeType;
    NSArray *points;
}

+ (id)boxPhysicsShape:(struct PKPhysicsShape *)arg1;

- (struct PKPhysicsShape *)unboxShape;

@end
