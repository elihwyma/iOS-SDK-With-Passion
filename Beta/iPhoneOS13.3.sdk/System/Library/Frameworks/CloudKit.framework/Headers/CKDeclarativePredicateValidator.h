/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidator.h>

@protocol CKObjectValidating;

__attribute__((visibility("hidden")))
@interface CKDeclarativePredicateValidator : CKPredicateValidator

{
    id <CKObjectValidating> _validator;
}

- (id)init;
- (_Bool)validate:(id)arg1 error:(id *)arg2;

@end
