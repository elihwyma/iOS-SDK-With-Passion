/*
 Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

#import <Foundation/NSObject.h>

@interface DKDrawingStrokePoint : NSObject

{
    double _force;
    double _velocity;
    struct CGPoint _location;
}

@property (nonatomic) struct CGPoint location;
@property (nonatomic) double force;
@property (nonatomic) double velocity;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
