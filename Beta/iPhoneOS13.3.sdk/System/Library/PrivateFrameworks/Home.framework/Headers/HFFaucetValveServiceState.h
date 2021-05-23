/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFServiceState.h>

@interface HFFaucetValveServiceState : HFServiceState

{
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
+ (id)optionalCharacteristicTypes;
+ (unsigned long long)_typeForSystemActiveState:(_Bool)arg1 heaterCoolerActiveState:(id)arg2 usageState:(long long)arg3 currentHeaterCoolerState:(id)arg4;

- (long long)priority;
- (_Bool)isTransitioning;
- (long long)primaryState;
- (id)initWithBatchReadResponse:(id)arg1;
- (id)stateTypeIdentifier;

@end
