/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSProcessExecutionProvision.h>

@class BSMachPortSendRight, BSTimer, NSObject;

@protocol OS_dispatch_queue;

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision

{
    CDStruct_4e83c7bf _allowance;
    unsigned long long _baselineValue;
    unsigned long long _consumedValue;
    NSObject<OS_dispatch_queue> *_queue;
    BSTimer *_timer;
    BSMachPortSendRight *_taskRight;
}

@property (nonatomic) long long type;
@property (nonatomic) CDStruct_4e83c7bf allowance;

+ (id)provisionWithAllowance:(CDStruct_4e83c7bf)arg1;
+ (id)provisionWithResourceType:(long long)arg1 timeInterval:(double)arg2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescriptionBuilder;
- (void)_beginMonitoring;
- (void)_updateProgress;
- (void)_stopMonitoring;
- (void)_prepareForReuse;
- (id)initWithAllowance:(CDStruct_4e83c7bf)arg1;
- (_Bool)_queue_updateConsumption;
- (double)_getElapsedCPUTimeForTaskPort:(unsigned int)arg1;
- (void)_queue_noteAllowanceExhausted;
- (void)_queue_stopMonitoring;
- (void)_queue_evaluateConsumption;
- (_Bool)_queue_calculateValueConsumed:(out unsigned long long *)arg1;
- (_Bool)allowanceRemaining:(out CDStruct_4e83c7bf *)arg1;
- (_Bool)isResourceProvision;

@end
