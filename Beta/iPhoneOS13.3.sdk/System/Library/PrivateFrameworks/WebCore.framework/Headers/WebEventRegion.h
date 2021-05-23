/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@interface WebEventRegion : NSObject

{
    struct CGPoint p1;
    struct CGPoint p2;
    struct CGPoint p3;
    struct CGPoint p4;
}

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hitTest:(struct CGPoint)arg1;
- (struct FloatQuad)quad;
- (id)initWithPoints:(struct CGPoint)arg1:(struct CGPoint)arg2:(struct CGPoint)arg3:(struct CGPoint)arg4;
- (struct CGPoint)p1;
- (struct CGPoint)p2;
- (struct CGPoint)p3;
- (struct CGPoint)p4;

@end
