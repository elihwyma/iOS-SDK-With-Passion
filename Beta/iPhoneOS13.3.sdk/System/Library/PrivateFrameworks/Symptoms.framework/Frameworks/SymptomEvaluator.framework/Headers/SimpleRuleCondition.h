/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol SymptomAdditionalProtocol;

__attribute__((visibility("hidden")))
@interface SimpleRuleCondition : NSObject

{
    NSMutableDictionary *_resetSources;
    int _conditionType;
    NSString *_conditionName;
    long long _conditionMinCount;
    NSString *_conditionPrevSymptom;
    long long _conditionMaxAge;
    long long _conditionFlags;
    NSString *_conditionStringID;
    long long _conditionStringLength;
    id <SymptomAdditionalProtocol> _additionalHandler;
    SEL _additionalSelector;
}

@property (retain, nonatomic) NSString *conditionName;
@property (nonatomic) long long conditionMinCount;
@property (nonatomic) int conditionType;
@property (retain, nonatomic) NSString *conditionPrevSymptom;
@property (nonatomic) long long conditionMaxAge;
@property (nonatomic) long long conditionFlags;
@property (retain, nonatomic) NSString *conditionStringID;
@property (nonatomic) long long conditionStringLength;
@property (retain, nonatomic) id <SymptomAdditionalProtocol> additionalHandler;
@property (nonatomic) SEL additionalSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)configureClass:(id)arg1;
+ (id)objectWithName:(id)arg1;

- (void)_reset:(id)arg1;
- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (_Bool)evaluatePrevSymptom:(id)arg1 showingWorkAt:(id)arg2;
- (_Bool)evaluateHandler:(id)arg1 showingWorkAt:(id)arg2;
- (_Bool)evaluate:(id)arg1 showingWorkAt:(id)arg2;

@end
