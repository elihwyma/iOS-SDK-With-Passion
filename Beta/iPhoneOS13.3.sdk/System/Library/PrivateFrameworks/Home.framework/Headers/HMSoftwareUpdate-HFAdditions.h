/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMSoftwareUpdate.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@interface HMSoftwareUpdate (HFAdditions) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hf_stringFromUpdateState:(long long)arg1;

- (_Bool)hf_shouldShowSoftwareUpdateInfo;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
