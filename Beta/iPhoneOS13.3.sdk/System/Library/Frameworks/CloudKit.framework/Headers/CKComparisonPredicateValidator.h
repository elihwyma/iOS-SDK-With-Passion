/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;

__attribute__((visibility("hidden")))
@interface CKComparisonPredicateValidator : CKPredicateValidatorInstance

{
    id <CKObjectValidating> _modifierValidator;
    id <CKObjectValidating> _leftExpressionValidator;
    id <CKObjectValidating> _operatorValidator;
    id <CKObjectValidating> _optionsValidator;
    id <CKObjectValidating> _rightExpressionValidator;
}

@property (retain, nonatomic) id <CKObjectValidating> modifierValidator;
@property (retain, nonatomic) id <CKObjectValidating> leftExpressionValidator;
@property (retain, nonatomic) id <CKObjectValidating> operatorValidator;
@property (retain, nonatomic) id <CKObjectValidating> optionsValidator;
@property (retain, nonatomic) id <CKObjectValidating> rightExpressionValidator;

- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;

@end
