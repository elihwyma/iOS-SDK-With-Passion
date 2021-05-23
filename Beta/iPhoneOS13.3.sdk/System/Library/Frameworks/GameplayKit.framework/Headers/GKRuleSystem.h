/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary;

@interface GKRuleSystem : NSObject

{
    NSMutableDictionary *_state;
    NSMutableArray *_rules;
    NSMutableArray *_agenda;
    NSMutableArray *_toBeExecuted;
    NSMutableArray *_executed;
    NSMapTable *_gradeByFact;
}

@property (retain, nonatomic, readonly) NSMutableDictionary *state;
@property (retain, nonatomic, readonly) NSArray *rules;
@property (retain, nonatomic, readonly) NSArray *agenda;
@property (retain, nonatomic, readonly) NSArray *executed;
@property (retain, nonatomic, readonly) NSArray *facts;

- (id)init;
- (void)reset;
- (void)addRule:(id)arg1;
- (void)evaluate;
- (float)gradeForFact:(id)arg1;
- (void)retractFact:(id)arg1;
- (void)_addRuleToAgenda:(id)arg1;
- (void)assertFact:(id)arg1 grade:(float)arg2;
- (void)retractFact:(id)arg1 grade:(float)arg2;
- (void)addRulesFromArray:(id)arg1;
- (void)removeAllRules;
- (float)minimumGradeForFacts:(id)arg1;
- (float)maximumGradeForFacts:(id)arg1;
- (void)assertFact:(id)arg1;

@end
