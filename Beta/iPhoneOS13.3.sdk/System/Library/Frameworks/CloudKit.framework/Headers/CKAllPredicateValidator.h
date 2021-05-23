/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKAllPredicateValidator : CKPredicateValidatorInstance

{
    NSArray *_validators;
}

@property (retain, nonatomic) NSArray *validators;

- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithValidators:(id)arg1;

@end
