/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@interface NSAffineTransform : NSObject <Swift>

{
    CDStruct_56a8f59f _transformStruct;
}

@property CDStruct_56a8f59f transformStruct;

+ (_Bool)supportsSecureCoding;
+ (id)transform;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invert;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransform:(id)arg1;
- (void)translateXBy:(double)arg1 yBy:(double)arg2;
- (void)rotateByDegrees:(double)arg1;
- (void)rotateByRadians:(double)arg1;
- (void)scaleBy:(double)arg1;
- (void)scaleXBy:(double)arg1 yBy:(double)arg2;
- (void)appendTransform:(id)arg1;
- (void)prependTransform:(id)arg1;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;

@end
