/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class MLDictionaryConstraint, MLImageConstraint, MLMultiArrayConstraint, MLSequenceConstraint, NSDictionary, NSString;

@interface MLFeatureDescription : NSObject <Swift>

{
    _Bool _optional;
    NSString *_name;
    long long _type;
    NSDictionary *_valueConstraints;
    MLMultiArrayConstraint *_multiArrayConstraintCached;
    MLImageConstraint *_imageConstraintCached;
    MLDictionaryConstraint *_dictionaryConstraintCached;
    MLSequenceConstraint *_sequenceConstraintCached;
}

@property (retain) NSDictionary *valueConstraints;
@property (nonatomic, readonly) MLMultiArrayConstraint *multiArrayConstraintCached;
@property (nonatomic, readonly) MLImageConstraint *imageConstraintCached;
@property (nonatomic, readonly) MLDictionaryConstraint *dictionaryConstraintCached;
@property (nonatomic, readonly) MLSequenceConstraint *sequenceConstraintCached;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, getter=isOptional) _Bool optional;

+ (_Bool)supportsSecureCoding;
+ (id)featureDescriptionWithName:(id)arg1 type:(long long)arg2 optional:(_Bool)arg3 constraints:(id)arg4;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugQuickLookObject;
- (id)imageConstraint;
- (id)multiArrayConstraint;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 type:(long long)arg2 optional:(_Bool)arg3 contraints:(id)arg4;
- (_Bool)isAllowedValue:(id)arg1;
- (id)dictionaryConstraint;
- (id)sequenceConstraint;
- (_Bool)allowsValuesWithDescription:(id)arg1;

@end
