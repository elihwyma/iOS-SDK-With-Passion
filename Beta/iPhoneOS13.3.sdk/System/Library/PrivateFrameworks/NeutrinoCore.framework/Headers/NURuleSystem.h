/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface NURuleSystem : NSObject

{
    NSMutableDictionary *_state;
    NSMutableDictionary *_constants;
    NSMutableArray *_rules;
    NSMutableArray *_agenda;
    NSMutableArray *_executed;
    NSMapTable *_gradeByFact;
    NSMutableString *_runLog;
    _Bool _enableLogging;
}

@property (copy, nonatomic) NSDictionary *constants;
@property (copy, nonatomic, readonly) NSDictionary *state;
@property (copy, nonatomic, readonly) NSArray *rules;
@property (copy, nonatomic, readonly) NSArray *agenda;
@property (copy, nonatomic, readonly) NSArray *executed;
@property (copy, nonatomic, readonly) NSDictionary *facts;
@property (nonatomic) _Bool enableLogging;
@property (copy, nonatomic, readonly) NSString *runLog;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (id)debugQuickLookObject;
- (void)addRule:(id)arg1;
- (void)evaluate;
- (double)gradeForFact:(id)arg1;
- (void)retractFact:(id)arg1;
- (void)_addRuleToAgenda:(id)arg1;
- (void)assertFact:(id)arg1 grade:(double)arg2;
- (void)retractFact:(id)arg1 grade:(double)arg2;
- (void)addRulesFromArray:(id)arg1;
- (void)removeAllRules;
- (double)minimumGradeForFacts:(id)arg1;
- (double)maximumGradeForFacts:(id)arg1;
- (void)assertFact:(id)arg1;
- (void)resetAndEvaluateWithInitialState:(id)arg1;
- (void)setStateObject:(id)arg1 forKey:(id)arg2;

@end
