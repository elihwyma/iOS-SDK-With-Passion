/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance

{
    NSString *_functionName;
    NSArray *_argumentValidators;
}

@property (retain, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSArray *argumentValidators;

- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithFunctionName:(id)arg1 validators:(id)arg2;

@end
