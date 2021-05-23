/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SimpleSyndromeHandler;

@protocol AdditionalInfoProtocol;

__attribute__((visibility("hidden")))
@interface SimpleRuleEvaluator : NSObject

{
    NSMutableArray *_conditionsToCheck;
    char *_stringToLog;
    unsigned long long _awd_code;
    SimpleSyndromeHandler *_syndromeToCall;
    id <AdditionalInfoProtocol> _additionalInfoGenerator;
    SEL _additionalInfoSelector;
    NSString *_signatureName;
}

@property (retain, nonatomic) NSString *signatureName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)configureClass:(id)arg1;
+ (id)objectWithName:(id)arg1;

- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (void)evaluateSignatureForEvent:(id)arg1;

@end
