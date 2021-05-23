/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXMagicalMomentsPrediction, NSCompoundPredicate;

@interface ATXMagicalMomentsPredictionTableEntry : NSObject

{
    ATXMagicalMomentsPrediction *_prediction;
    NSCompoundPredicate *_compoundPredicate;
}

@property (nonatomic, readonly) ATXMagicalMomentsPrediction *prediction;
@property (nonatomic, readonly) NSCompoundPredicate *compoundPredicate;

+ (_Bool)supportsSecureCoding;
+ (id)compoundPredicateFromPredicateArray:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrediction:(id)arg1 applicablePredicates:(id)arg2;
- (id)initWithPrediction:(id)arg1 applicableCompoundPredicate:(id)arg2;

@end
