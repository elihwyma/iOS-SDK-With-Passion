/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSDLayoutGeometry : NSObject <Swift>

{
    struct CGSize mSize;
    struct CGAffineTransform mTransform;
}

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) struct CGAffineTransform transform;

+ (id)geometryFromFullTransform:(struct CGAffineTransform)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)frame;
- (struct CGPoint)center;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGAffineTransform)inverseTransform;
- (_Bool)differsInMoreThanTranslationFrom:(id)arg1;
- (id)infoGeometry;
- (struct CGAffineTransform)fullTransform;
- (id)initWithInfoGeometry:(id)arg1;
- (id)geometryByTranslatingBy:(struct CGPoint)arg1;
- (struct CGAffineTransform)transformByConcatenatingTransformTo:(struct CGAffineTransform)arg1;
- (id)initWithSize:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2;
- (id)geometryByTransformingBy:(struct CGAffineTransform)arg1;
- (id)geometryByOutsettingBy:(struct CGSize)arg1;

@end
