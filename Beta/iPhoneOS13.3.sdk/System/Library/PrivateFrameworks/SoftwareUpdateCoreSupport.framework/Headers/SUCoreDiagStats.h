/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

#import <Foundation/NSObject.h>

@interface SUCoreDiagStats : NSObject

{
    long long _beginCount;
    long long _endSuccessCount;
    long long _endFailCount;
    long long _errorCount;
    long long _anomalyCount;
    long long _failureCount;
    long long _faultCount;
    long long _stateEventCount;
}

@property (nonatomic) long long beginCount;
@property (nonatomic) long long endSuccessCount;
@property (nonatomic) long long endFailCount;
@property (nonatomic) long long errorCount;
@property (nonatomic) long long anomalyCount;
@property (nonatomic) long long failureCount;
@property (nonatomic) long long faultCount;
@property (nonatomic) long long stateEventCount;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)summary;
- (id)initWithBeginCount:(long long)arg1 withEndSuccessCount:(long long)arg2 withEndFailCount:(long long)arg3 withErrorCount:(long long)arg4 withAnomalyCount:(long long)arg5 withFailureCount:(long long)arg6 withFaultCount:(long long)arg7 withStateEventCount:(long long)arg8;

@end
