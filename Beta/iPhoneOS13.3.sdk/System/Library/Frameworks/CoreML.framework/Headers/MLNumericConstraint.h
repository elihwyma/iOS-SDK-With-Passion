/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class NSNumber, NSSet;

@interface MLNumericConstraint : NSObject <Swift>

{
    NSNumber *_minNumber;
    NSNumber *_maxNumber;
    NSSet *_enumeratedNumbers;
}

@property (retain, nonatomic) NSNumber *minNumber;
@property (retain, nonatomic) NSNumber *maxNumber;
@property (retain, nonatomic) NSSet *enumeratedNumbers;

+ (_Bool)supportsSecureCoding;
+ (id)numericConstraintWithMinNumber:(id)arg1 maxNumber:(id)arg2;
+ (id)numericConstraintWithEnumeratedNumbers:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
