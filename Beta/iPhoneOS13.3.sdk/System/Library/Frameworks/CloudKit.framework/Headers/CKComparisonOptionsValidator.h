/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidatorInstance.h>

__attribute__((visibility("hidden")))
@interface CKComparisonOptionsValidator : CKPredicateValidatorInstance

{
    unsigned long long _options;
}

@property (nonatomic) unsigned long long options;

- (id)initWithOptions:(unsigned long long)arg1;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;

@end
