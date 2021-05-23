/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFServiceState.h>

@interface HFIrrigationValveServiceState : HFServiceState

{
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
+ (unsigned long long)_typeForSystemActiveState:(_Bool)arg1 usageState:(long long)arg2;

- (long long)priority;
- (_Bool)isTransitioning;
- (long long)primaryState;
- (id)initWithBatchReadResponse:(id)arg1;
- (id)stateTypeIdentifier;

@end
