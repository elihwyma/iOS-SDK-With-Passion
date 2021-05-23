/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSDWrapPolygon : NSObject <Swift>

{
    void *mPolygon;
    _Bool mIntersectsSelf;
    _Bool mComputedSelfIntersection;
    struct CGRect mBounds;
    _Bool mComputedBounds;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1;
- (void)setPath:(id)arg1;
- (struct CGRect)bounds;
- (id)bezierPath;
- (void *)polygon;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (_Bool)intersectsSelf;
- (void)setIntersectsSelf:(_Bool)arg1;
- (void)p_setPolygon:(CDStruct_727a4eeb *)arg1;
- (void)p_freePolygon;
- (void)p_computeIntersectionState;
- (struct CGPoint)intersectionPointBetween:(struct CGPoint)arg1 and:(struct CGPoint)arg2;
- (int)p_countSegments;

@end
