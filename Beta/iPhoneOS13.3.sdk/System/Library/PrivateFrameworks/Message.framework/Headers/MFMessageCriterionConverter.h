/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@protocol MFMessageCriterionConverterDelegate;

@interface MFMessageCriterionConverter : NSObject

{
    id <MFMessageCriterionConverterDelegate> _delegate;
}

@property (weak, nonatomic) id <MFMessageCriterionConverterDelegate> delegate;

+ (id)spotlightRecipientSearchPredicateForValue:(id)arg1 operator:(unsigned long long)arg2;
+ (id)spotlightSenderSearchPredicateForValue:(id)arg1 operator:(unsigned long long)arg2;
+ (id)spotlightSubjectSearchPredicateForValue:(id)arg1 operator:(unsigned long long)arg2;
+ (id)spotlightBodySearchPredicateForValue:(id)arg1;
+ (id)spotlightSearchPredicateForValue:(id)arg1;

- (id)messageCriterionFromPredicate:(id)arg1;
- (id)predicateFromMessageCriterion:(id)arg1;
- (unsigned long long)_proposedPredicateOperatorType:(unsigned long long)arg1 forKey:(id)arg2;
- (id)_predicateForKey:(id)arg1 value:(id)arg2 qualifier:(int)arg3;
- (id)_simplifiedCompoundPredicateOfType:(unsigned long long)arg1 forSubqueries:(id)arg2;
- (id)_defaultKeysForCriterionType:(long long)arg1;
- (id)_predicateKeysForCriterion:(long long)arg1;
- (id)_searchPredicateForCriterion:(id)arg1;
- (id)_orPredicateForAttributes:(id)arg1 matchingValue:(id)arg2 qualifier:(int)arg3;
- (long long)_defaultCriterionTypeForKey:(id)arg1;
- (long long)_criterionTypeForKey:(id)arg1;
- (long long)_criterionTypeFromExpression:(id)arg1;
- (id)_messageCriterionForCompoundPredicate:(id)arg1;
- (id)_messageCriterionForComparisonPredicate:(id)arg1;
- (id)messageCriterionFromPredicateFormatString:(id)arg1;

@end
