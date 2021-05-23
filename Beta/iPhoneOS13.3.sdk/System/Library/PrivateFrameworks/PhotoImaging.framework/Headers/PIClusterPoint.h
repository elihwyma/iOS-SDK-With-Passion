/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PIClusterPoint : NSObject

{
    double _value;
    struct CGPoint _point;
}

@property (nonatomic, readonly) struct CGPoint point;
@property (nonatomic, readonly) double value;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCGPoint:(struct CGPoint)arg1 value:(double)arg2;
- (double)distanceFromPoint:(struct CGPoint)arg1;
- (_Bool)isEqualToPoint:(id)arg1;

@end
