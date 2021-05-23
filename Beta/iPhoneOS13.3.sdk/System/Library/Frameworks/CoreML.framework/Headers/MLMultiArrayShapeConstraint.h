/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class NSArray, NSOrderedSet;

@interface MLMultiArrayShapeConstraint : NSObject <Swift>

{
    long long _type;
    NSArray *_sizeRangeForDimension;
    NSOrderedSet *_shapeSet;
}

@property (nonatomic, readonly) NSOrderedSet *shapeSet;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSArray *sizeRangeForDimension;
@property (nonatomic, readonly) NSArray *enumeratedShapes;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initUnspecified;
- (id)initWithSizeRangeForDimension:(id)arg1;
- (id)initWithEnumeratedShapes:(id)arg1;
- (_Bool)isAllowedShape:(id)arg1 error:(id *)arg2;
- (id)findAvailableShape:(id)arg1;

@end
