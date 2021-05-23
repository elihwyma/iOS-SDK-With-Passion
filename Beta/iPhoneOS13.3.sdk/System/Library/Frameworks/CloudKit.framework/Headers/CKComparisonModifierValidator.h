/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidatorInstance.h>

__attribute__((visibility("hidden")))
@interface CKComparisonModifierValidator : CKPredicateValidatorInstance

{
    unsigned long long _modifier;
}

@property (nonatomic) unsigned long long modifier;

- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithModifier:(unsigned long long)arg1;

@end
