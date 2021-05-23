/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <NetworkExtension/NEAppProxyProviderContainer.h>

@class NEFlowDivertFileHandle, NEPolicySession, NSPConfiguration;

@interface NSPFlowDivert : NEAppProxyProviderContainer

{
    _Bool _shouldResetPolicies;
    _Bool _started;
    NSPConfiguration *_configuration;
    NEPolicySession *_policySession;
    NEFlowDivertFileHandle *_flowDivertControlHandle;
    NEFlowDivertFileHandle *_flowDivertDataHandle;
}

@property (retain) NEPolicySession *policySession;
@property (retain) NEFlowDivertFileHandle *flowDivertControlHandle;
@property (retain) NEFlowDivertFileHandle *flowDivertDataHandle;
@property _Bool started;
@property _Bool shouldResetPolicies;
@property (retain) NSPConfiguration *configuration;

- (void)stop;
- (void)teardown;
- (void)addPolicy:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createFlowDivertSocketHandles;
- (id)createPolicySession;
- (id)getAgentResults:(id)arg1;
- (_Bool)shouldInstallFlowDivert:(id)arg1;
- (id)getExecutableConditions:(id)arg1;
- (void)addPoliciesForDivertDNSOnly:(id)arg1 domainConditions:(id)arg2 divertResult:(id)arg3;
- (void)addPoliciesForAgent:(id)arg1 conditions:(id)arg2;
- (id)getEffectiveAppRules:(id)arg1;
- (id)getAgentResultsForSelf;
- (_Bool)resetPolicies:(_Bool)arg1;
- (void)destroyFlowDivertSocketHandles;
- (void)destroyPolicySession;
- (id)initWithDelegate:(id)arg1 providerClass:(Class)arg2 configuration:(id)arg3;
- (void)didStartWithError:(id)arg1;

@end
