/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class PKPhysicsBody;

__attribute__((visibility("hidden")))
@interface SKUICircleRepellor : NSObject

{
    double _bufferSize;
    struct CGPoint _center;
    PKPhysicsBody *_physicsBody;
    double _radius;
}

@property (nonatomic) double bufferSize;
@property (nonatomic) struct CGPoint center;
@property (retain, nonatomic) PKPhysicsBody *physicsBody;
@property (nonatomic) double radius;

- (id)description;

@end
