/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFServiceState.h>

@interface HFIrrigationSystemServiceState : HFServiceState

{
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
+ (unsigned long long)_typeForActiveState:(_Bool)arg1 usageState:(long long)arg2 programMode:(long long)arg3;

- (long long)priority;
- (long long)primaryState;
- (id)initWithBatchReadResponse:(id)arg1;
- (id)stateTypeIdentifier;

@end
