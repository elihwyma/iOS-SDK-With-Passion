/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKBezierPathElement : NSObject

{
    int _type;
    unsigned long long _pointCount;
    struct CGPoint *_points;
    double _length;
}

@property (nonatomic) int type;
@property (nonatomic) unsigned long long pointCount;
@property (nonatomic) struct CGPoint *points;
@property (nonatomic) double length;
@property (nonatomic, readonly) struct CGPoint startPoint;
@property (nonatomic, readonly) struct CGPoint endPoint;

- (void)dealloc;
- (id)initWithStartPoint:(struct CGPoint)arg1 pathElement:(const struct CGPathElement *)arg2;
- (unsigned long long)numberOfPointsForCGPathElementType:(int)arg1;
- (double)computeLength;
- (struct CGPoint)pointOnPathForX:(double)arg1;

@end
