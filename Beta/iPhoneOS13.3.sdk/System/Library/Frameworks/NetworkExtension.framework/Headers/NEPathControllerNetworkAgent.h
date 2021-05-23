/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NENetworkAgent.h>

@class NSMutableArray, NSString;

@interface NEPathControllerNetworkAgent : NENetworkAgent

{
    _Bool updateClientsImmediately;
    _Bool _isForcedAdvisory;
    _Bool _weakAdvisory;
    _Bool _noAdvisoryTimer;
    CDUnknownBlockType _internalAssertHandler;
    CDUnknownBlockType _internalUnassertHandler;
    NSMutableArray *_predictedInterfaceArray;
    NSMutableArray *_advisoryInterfaceArray;
    NSString *_advisoryAgentDomain;
    NSString *_advisoryAgentType;
}

@property (copy) CDUnknownBlockType internalAssertHandler;
@property (copy) CDUnknownBlockType internalUnassertHandler;
@property (retain) NSMutableArray *predictedInterfaceArray;
@property (retain) NSMutableArray *advisoryInterfaceArray;
@property (retain) NSString *advisoryAgentDomain;
@property (retain) NSString *advisoryAgentType;
@property _Bool weakAdvisory;
@property _Bool noAdvisoryTimer;
@property (nonatomic) _Bool isForcedAdvisory;

+ (id)agentType;
+ (id)agentFromData:(id)arg1;

- (_Bool)updateClientsImmediately;
- (id)copyAgentData;
- (void)unassertAgentWithOptions:(id)arg1;
- (_Bool)assertAgentWithOptions:(id)arg1;
- (void)setUpdateClientsImmediately:(_Bool)arg1;
- (void)setAssertHandler:(CDUnknownBlockType)arg1;
- (void)setUnassertHandler:(CDUnknownBlockType)arg1;
- (id)initWithAdvisoryInterface:(id)arg1 advisoryMode:(unsigned long long)arg2;
- (id)initWithAdvisoryAgentDomain:(id)arg1 agentType:(id)arg2 advisoryMode:(unsigned long long)arg3;

@end
