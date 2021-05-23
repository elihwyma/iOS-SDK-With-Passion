/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary;

@interface DecisionDetails : NSObject

{
    NSDate *_timestamp;
    NSMutableArray *_evaluations;
    NSMutableDictionary *_additionalInfo;
    unsigned long long _reasonCode;
    char *_reason;
}

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSMutableArray *evaluations;
@property (retain, nonatomic) NSMutableDictionary *additionalInfo;
@property (nonatomic) unsigned long long reasonCode;
@property (nonatomic) char *reason;

- (void)dealloc;
- (id)description;
- (id)initWithReason:(const char *)arg1 code:(unsigned long long)arg2 evaluations:(id)arg3;

@end
