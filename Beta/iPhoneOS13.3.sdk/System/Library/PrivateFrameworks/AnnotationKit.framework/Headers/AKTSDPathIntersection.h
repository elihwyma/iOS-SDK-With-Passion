/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKTSDPathIntersection : NSObject

{
    long long mSegment;
    long long mSegmentB;
    double mT;
    double mTB;
    struct CGPoint mPoint;
}

@property (nonatomic, readonly) long long segment;
@property (nonatomic, readonly) long long segmentB;
@property (nonatomic, readonly) double t;
@property (nonatomic, readonly) double tB;
@property (nonatomic) struct CGPoint point;

- (id)description;
- (long long)compareSegmentAndT:(id)arg1;
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 onSegmentB:(long long)arg3 atT:(double)arg4 atPoint:(struct CGPoint)arg5;
- (long long)compareT:(id)arg1;
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 atPoint:(struct CGPoint)arg3;

@end
