/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@interface CIFilterShape : NSObject

{
    unsigned int _pad;
    void *_priv;
}

@property (readonly) struct CGRect extent;

+ (id)_shapeInfinite;
+ (id)shapeWithRect:(struct CGRect)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (id)initWithRect:(struct CGRect)arg1;
- (id)initWithStruct:(struct filterShape *)arg1;
- (id)transformBy:(struct CGAffineTransform)arg1 interior:(_Bool)arg2;
- (id)insetByX:(int)arg1 Y:(int)arg2;
- (id)unionWith:(id)arg1;
- (id)unionWithRect:(struct CGRect)arg1;
- (id)intersectWith:(id)arg1;
- (id)intersectWithRect:(struct CGRect)arg1;
- (struct CGSRegionObject *)CGSRegion;

@end
