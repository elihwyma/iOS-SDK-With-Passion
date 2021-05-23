/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPropertyValidationRule.h>

@class NSArray;

@interface PLCompoundPropertyValidationRule : PLPropertyValidationRule

{
    long long _compoundType;
    NSArray *_rules;
}

@property (nonatomic) long long compoundType;
@property (retain, nonatomic) NSArray *rules;

+ (id)andCompoundPropertyValidationRuleWithRules:(id)arg1;
+ (id)orCompoundPropertyValidationRuleWithRules:(id)arg1;

- (id)predicate;
- (id)initWithType:(long long)arg1 rules:(id)arg2;
- (id)keyPaths;
- (id)currentValuesOfObject:(id)arg1;

@end
