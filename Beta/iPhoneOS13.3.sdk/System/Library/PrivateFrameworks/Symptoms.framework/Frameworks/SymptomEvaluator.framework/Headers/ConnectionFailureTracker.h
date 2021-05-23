/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ConnectionFailureTracker : NSObject

{
    _Bool _isIPv6;
    int _numConsecutiveFailures;
    unsigned int _ifIndex;
    double _firstConnectionFailTime;
    double _lastConnectionFailTime;
    NSString *_processName;
    long long _ifType;
    NSData *_destinationAddress;
    NSMutableArray *_failedFlows;
}

@property (nonatomic) int numConsecutiveFailures;
@property (nonatomic) double firstConnectionFailTime;
@property (nonatomic) double lastConnectionFailTime;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) _Bool isIPv6;
@property (nonatomic) unsigned int ifIndex;
@property (nonatomic) long long ifType;
@property (retain, nonatomic) NSData *destinationAddress;
@property (retain, nonatomic) NSMutableArray *failedFlows;

- (id)description;
- (void)_logFailure;
- (void)_reportFailure:(unsigned long long)arg1 owner:(id)arg2;
- (_Bool)noteInitialSnapshot:(id)arg1;

@end
