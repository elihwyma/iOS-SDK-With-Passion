/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;

__attribute__((visibility("hidden")))
@interface CKFlipFlopPredicateValidator : CKPredicateValidatorInstance

{
    id <CKObjectValidating> _validator;
}

@property (retain, nonatomic) id <CKObjectValidating> validator;

- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithValidator:(id)arg1;

@end
