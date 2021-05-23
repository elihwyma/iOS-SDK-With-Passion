/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSDInfoGeometry : NSObject <Swift>

{
    struct CGPoint mPosition;
    struct CGSize mSize;
    struct {
        unsigned int widthValid:1;
        unsigned int heightValid:1;
        unsigned int horizontalFlip:1;
        unsigned int verticalFlip:1;
    } mFlags;
    double mAngle;
}

@property (nonatomic, readonly) struct CGPoint position;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) _Bool widthValid;
@property (nonatomic, readonly) _Bool heightValid;
@property (nonatomic, readonly) _Bool horizontalFlip;
@property (nonatomic, readonly) _Bool verticalFlip;
@property (nonatomic, readonly) double angle;

+ (id)geometryFromFullTransform:(struct CGAffineTransform)arg1;
+ (id)geometryFromFullTransform:(struct CGAffineTransform)arg1 widthValid:(_Bool)arg2 heightValid:(_Bool)arg3;
+ (id)geometryFromTransform:(struct CGAffineTransform)arg1 withSize:(struct CGSize)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (struct CGAffineTransform)transform;
- (id)initWithWidth:(double)arg1;
- (struct CGPoint)center;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithHeight:(double)arg1;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (_Bool)isEqualExceptForPosition:(id)arg1;
- (struct CGAffineTransform)fullTransform;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 widthValid:(_Bool)arg3 heightValid:(_Bool)arg4 horizontalFlip:(_Bool)arg5 verticalFlip:(_Bool)arg6 angle:(double)arg7;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint)arg1 size:(struct CGSize)arg2 horizontalFlip:(_Bool)arg3 verticalFlip:(_Bool)arg4 angle:(double)arg5;
- (struct CGPoint)transformedBoundsOrigin;
- (struct CGRect)boundsBeforeRotation;
- (struct CGAffineTransform)transformBasedOnRect:(struct CGRect)arg1;
- (struct CGAffineTransform)transformBasedOnPoint:(struct CGPoint)arg1 centeredAtPoint:(struct CGPoint)arg2;
- (struct CGAffineTransform)transformBasedOnPoint:(struct CGPoint)arg1 centeredAtPoint:(struct CGPoint)arg2 withFlips:(_Bool)arg3;
- (struct CGRect)transformedBounds;
- (id)initWithFullTransform:(struct CGAffineTransform)arg1 widthValid:(_Bool)arg2 heightValid:(_Bool)arg3;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 angle:(double)arg3;
- (id)initWithCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint)arg1 size:(struct CGSize)arg2 angle:(double)arg3;
- (struct CGAffineTransform)transformWithoutFlips;
- (id)initWithTransform:(struct CGAffineTransform)arg1 size:(struct CGSize)arg2;
- (id)geometryByAppendingTransform:(struct CGAffineTransform)arg1;
- (id)geometryWithParentGeometry:(id)arg1;
- (id)geometryByAppendingGeometry:(id)arg1;
- (id)geometryRelativeToGeometry:(id)arg1;
- (id)geometryWithNewBounds:(struct CGRect)arg1;
- (id)normalizedGeometry;

@end
