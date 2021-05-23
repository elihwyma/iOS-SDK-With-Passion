/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKStringValueValidator : CKPredicateValidatorInstance

{
    NSString *_value;
}

@property (retain, nonatomic) NSString *value;

- (id)initWithValue:(id)arg1;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;

@end
