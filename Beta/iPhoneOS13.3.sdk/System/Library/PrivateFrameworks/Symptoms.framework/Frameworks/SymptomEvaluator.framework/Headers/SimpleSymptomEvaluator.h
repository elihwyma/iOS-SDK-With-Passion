/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol SymptomAdditionalProtocol;

__attribute__((visibility("hidden")))
@interface SimpleSymptomEvaluator : NSObject

{
    NSString *symptomName;
    NSString *symptomKey;
    unsigned int symptomSaveFlags;
    unsigned int symptomSaveAdditionalId;
    unsigned int symptomMaxRetainTime;
    id <SymptomAdditionalProtocol> symptomAdditionalHandlers[4];
    NSMutableArray *symptomRules;
}

@property (retain, nonatomic) NSString *symptomName;
@property (retain, nonatomic) NSString *symptomKey;
@property (nonatomic) unsigned int symptomSaveFlags;
@property (nonatomic) unsigned int symptomSaveAdditionalId;
@property (nonatomic) unsigned int symptomMaxRetainTime;
@property (retain, nonatomic) NSMutableArray *symptomRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)configureClass:(id)arg1;
+ (id)objectWithName:(id)arg1;
+ (void)postIncomingEvent:(id)arg1;
+ (id)_defaultEvaluator;

- (id)initWithName:(id)arg1;
- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (void)evaluateIncomingEvent:(id)arg1;

@end
