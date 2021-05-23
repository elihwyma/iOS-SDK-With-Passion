/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface Score : NSObject

{
    double _upPct;
    double _overallStay;
    double _handicapStay;
    double _epochs;
    double _lqmTransitionCount;
    double _connSuccesses;
    double _connAttempts;
}

@property (nonatomic) double upPct;
@property (nonatomic) double overallStay;
@property (nonatomic) double handicapStay;
@property (nonatomic) double epochs;
@property (nonatomic) double lqmTransitionCount;
@property (nonatomic) double connSuccesses;
@property (nonatomic) double connAttempts;

- (id)description;

@end
