/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidatorInstance.h>

__attribute__((visibility("hidden")))
@interface CKKindOfClassValidator : CKPredicateValidatorInstance

{
    Class _parentClass;
}

@property (retain, nonatomic) Class parentClass;

- (id)initWithClass:(Class)arg1;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;

@end
