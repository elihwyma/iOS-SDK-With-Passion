/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PathPoint : NSObject

{
    _Bool _sentinelPoint;
    double _force;
    double _relativeTime;
    double _absoluteTime;
    double _decay;
    double _length;
    struct CGPoint _point;
}

@property (nonatomic, getter=isSentinelPoint) _Bool sentinelPoint;
@property (nonatomic) struct CGPoint point;
@property (nonatomic) double force;
@property (nonatomic) double relativeTime;
@property (nonatomic) double absoluteTime;
@property (nonatomic) double decay;
@property (nonatomic) double length;

- (id)description;

@end
