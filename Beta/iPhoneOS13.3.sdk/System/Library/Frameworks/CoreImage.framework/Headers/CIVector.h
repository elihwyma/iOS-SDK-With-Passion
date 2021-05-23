/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CIVector : NSObject

{
    unsigned long long _count;
    union {
        double vec[4];
        double *ptr;
    } _u;
}

@property (readonly) double *_values;
@property (readonly) unsigned long long count;
@property (readonly) double X;
@property (readonly) double Y;
@property (readonly) double Z;
@property (readonly) double W;
@property (readonly) struct CGPoint CGPointValue;
@property (readonly) struct CGRect CGRectValue;
@property (readonly) struct CGAffineTransform CGAffineTransformValue;
@property (readonly) NSString *stringRepresentation;

+ (_Bool)supportsSecureCoding;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
+ (id)vectorWithCGPoint:(struct CGPoint)arg1;
+ (id)vectorWithX:(double)arg1 Y:(double)arg2;
+ (id)vectorWithCGRect:(struct CGRect)arg1;
+ (id)vectorWithX:(double)arg1;
+ (id)vectorWithValues:(const double *)arg1 count:(unsigned long long)arg2;
+ (id)vectorWithString:(id)arg1;
+ (id)vectorWithCGAffineTransform:(struct CGAffineTransform)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (double)valueAtIndex:(unsigned long long)arg1;
- (float)_norm;
- (float)_dot:(id)arg1;
- (id)_orthonormalizeTo:(id)arg1;
- (id)initWithValues:(const double *)arg1 count:(unsigned long long)arg2;
- (id)initWithX:(double)arg1;
- (id)initWithX:(double)arg1 Y:(double)arg2;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;
- (id)initWithCGPoint:(struct CGPoint)arg1;
- (id)initWithCGRect:(struct CGRect)arg1;
- (id)initWithCGAffineTransform:(struct CGAffineTransform)arg1;

@end
