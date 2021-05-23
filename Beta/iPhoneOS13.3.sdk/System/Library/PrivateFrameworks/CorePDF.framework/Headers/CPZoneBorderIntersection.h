/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPZoneBorder;

__attribute__((visibility("hidden")))
@interface CPZoneBorderIntersection : NSObject

{
    struct CGRect intersectionRect;
    CPZoneBorder *intersectingBorder;
    _Bool forwardVector;
    _Bool backwardVector;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initSuper;
- (void)setIntersectionRect:(struct CGRect)arg1;
- (void)setIntersectingBorder:(id)arg1;
- (long long)comparePositionLengthwise:(id)arg1;
- (id)intersectingBorder;
- (struct CGRect)intersectionRect;
- (_Bool)forwardVector;
- (_Bool)backwardVector;
- (void)setForwardVector:(_Bool)arg1;
- (void)setBackwardVector:(_Bool)arg1;

@end
