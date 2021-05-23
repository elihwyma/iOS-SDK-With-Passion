/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate;

@interface HFConditionCollection : NSObject

{
    NSArray *_conditions;
}

@property (retain, nonatomic) NSArray *conditions;
@property (copy, nonatomic, readonly) NSPredicate *predicate;

+ (id)_singleConditionForPredicate:(id)arg1 knownConditionsOnly:(_Bool)arg2;
+ (id)_flattenedSubpredicatesForAndPredicate:(id)arg1;
+ (id)_findBestMatchingConditionsForPredicates:(id)arg1;
+ (id)_findBestConditionMatchForPredicates:(id)arg1;
+ (id)conditionCollectionForPredicate:(id)arg1;

- (id)init;
- (void)addCondition:(id)arg1;
- (id)initWithConditions:(id)arg1;
- (void)removeCondition:(id)arg1;

@end
