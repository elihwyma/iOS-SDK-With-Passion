/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxShape : NSObject

{
    struct FxShapePriv *_priv;
}

+ (id)shapeWithRect:(struct CGRect)arg1;
+ (id)infiniteShape;

- (void)dealloc;
- (struct CGRect)extent;
- (id)initWithRect:(struct CGRect)arg1;
- (_Bool)isInfinite;
- (id)initWithInfiniteBounds;
- (id)intersectWithShape:(id)arg1;

@end
