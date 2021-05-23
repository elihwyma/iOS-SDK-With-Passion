/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface BRCSyncOperationThrottleParams : NSObject

{
    double minWait;
    double maxWait;
    double ratioOnSuccess;
    double ratioOnFailure;
    double ratioOnQuotaErrorClear;
    double inactivityKickbackDelay;
    double inactivityKickbackRatio;
}

@property (nonatomic) double minWait;
@property (nonatomic) double maxWait;
@property (nonatomic) double ratioOnSuccess;
@property (nonatomic) double ratioOnQuotaErrorClear;
@property (nonatomic) double ratioOnFailure;
@property (nonatomic) double inactivityKickbackDelay;
@property (nonatomic) double inactivityKickbackRatio;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)check;
- (double)doubleForKey:(id)arg1 inParams:(id)arg2 defaults:(id)arg3;
- (void)setupWithParams:(id)arg1 defaults:(id)arg2;
- (id)paramsToDictionary;
- (id)initWithParams:(id)arg1 defaults:(id)arg2;

@end
