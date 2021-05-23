/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

#import <RemoteManagement/Swift-Protocol.h>

@class NSArray, NSLock, NSString, RMAssetResolver, RMConfigurationRepository, RMPolicyStore;

@protocol RMExtensionConfigurationApplicator;

@interface RMExtensionConfigurationSubscriber : NSObject <Swift>

{
    NSLock *_configurationRepositoryLock;
    RMConfigurationRepository *_configurationRepository;
    RMAssetResolver *_assetResolver;
    RMPolicyStore *_policyStore;
    id <RMExtensionConfigurationApplicator> _applicator;
    NSArray *_configurationTypes;
}

@property (retain, nonatomic) RMConfigurationRepository *configurationRepository;
@property (retain, nonatomic) RMAssetResolver *assetResolver;
@property (retain, nonatomic) RMPolicyStore *policyStore;
@property (nonatomic, readonly) id <RMExtensionConfigurationApplicator> applicator;
@property (nonatomic, readonly) NSArray *configurationTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedSubscriber;

- (id)init;
- (id)initWithConfigurationRepository:(id)arg1 assetResolver:(id)arg2 policyStore:(id)arg3 applicator:(id)arg4 configurationTypes:(id)arg5;
- (void)fetchThenApplyConfigurationsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
