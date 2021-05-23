/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@interface UIAcceleration : NSObject

{
    double _timestamp;
    double _x;
    double _y;
    double _z;
}

@property (nonatomic) double timestamp;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

- (id)description;

@end
