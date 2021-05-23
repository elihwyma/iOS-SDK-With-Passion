/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidatorInstance.h>

__attribute__((visibility("hidden")))
@interface CKCompoundTypePredicateValidator : CKPredicateValidatorInstance

{
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;

- (id)initWithType:(unsigned long long)arg1;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;

@end
