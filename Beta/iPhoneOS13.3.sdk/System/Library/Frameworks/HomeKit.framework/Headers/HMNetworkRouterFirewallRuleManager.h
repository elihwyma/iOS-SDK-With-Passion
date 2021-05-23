/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFMessageDestination, HMHomeManager;

@interface HMNetworkRouterFirewallRuleManager : NSObject

{
    HMHomeManager *_homeManager;
    HMFMessageDestination *_messageDestination;
}

@property (weak, nonatomic, readonly) HMHomeManager *homeManager;
@property (nonatomic, readonly) HMFMessageDestination *messageDestination;

- (void)__sendMessage:(id)arg1;
- (void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(_Bool)arg3 listOnly:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_addOverrides:(id)arg1 replace:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchCloudChangesWithForceChangesFound:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithHomeManager:(id)arg1;
- (void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dumpAllLocalRulesIgnoringOverrides:(_Bool)arg1 rawOutput:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(_Bool)arg2 rawOutput:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)removeAllLocalRulesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchCloudChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchCloudChangesAndForceChangesFoundWithCompletion:(CDUnknownBlockType)arg1;

@end
