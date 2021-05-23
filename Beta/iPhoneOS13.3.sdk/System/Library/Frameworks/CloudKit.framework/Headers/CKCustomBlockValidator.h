/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidatorInstance.h>

__attribute__((visibility("hidden")))
@interface CKCustomBlockValidator : CKPredicateValidatorInstance

{
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)validate:(id)arg1 error:(id *)arg2;

@end
