/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMResidentDevice.h>

#import <Home/Swift-Protocol.h>

@class HMAccessory, NSString;

@interface HMResidentDevice (HFDebugging) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HMAccessory *hf_linkedAccessory;
@property (nonatomic, readonly) NSString *hf_displayName;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (_Bool)hf_isReachable;

@end
