/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidatorInstance.h>

__attribute__((visibility("hidden")))
@interface CKComparisonOperatorValidator : CKPredicateValidatorInstance

{
    unsigned long long _operatorType;
}

@property (nonatomic) unsigned long long operatorType;

- (id)initWithOperatorType:(unsigned long long)arg1;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;

@end
