/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKAggregateExpressionValidator : CKPredicateValidatorInstance

{
    NSArray *_subExpressionValidators;
}

@property (retain, nonatomic) NSArray *subExpressionValidators;

- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithValidators:(id)arg1;

@end
