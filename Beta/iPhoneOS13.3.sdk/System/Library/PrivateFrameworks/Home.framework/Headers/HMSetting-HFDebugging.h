/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMSetting.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@interface HMSetting (HFDebugging) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hf_isBooleanSetting;
@property (copy, nonatomic, readonly) NSString *hf_debugValueDescription;

+ (id)hf_debugDescriptionForValue:(id)arg1 keyPath:(id)arg2;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
