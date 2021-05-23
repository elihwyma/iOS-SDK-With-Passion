/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class MLNumericConstraint, MLParameterKey;

@interface MLParameterDescription : NSObject <Swift>

{
    MLParameterKey *_key;
    id _defaultValue;
    MLNumericConstraint *_numericConstraint;
}

@property (retain, nonatomic) MLParameterKey *key;
@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) MLNumericConstraint *numericConstraint;

+ (_Bool)supportsSecureCoding;
+ (id)parameterDescriptionForKey:(id)arg1 defaultValue:(id)arg2 numericConstraint:(id)arg3;
+ (id)parameterDescriptionForKey:(id)arg1 int64ParameterSpec:(const struct Int64Parameter *)arg2;
+ (id)parameterDescriptionForKey:(id)arg1 doubleParameterSpec:(const struct DoubleParameter *)arg2;
+ (id)parameterDescriptionForKey:(id)arg1 stringParameterSpec:(const struct StringParameter *)arg2;
+ (id)parameterDescriptionForKey:(id)arg1 boolParameterSpec:(const struct BoolParameter *)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
