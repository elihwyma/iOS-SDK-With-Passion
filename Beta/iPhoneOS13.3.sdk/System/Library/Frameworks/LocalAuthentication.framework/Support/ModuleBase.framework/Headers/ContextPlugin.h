/*
 Image: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
 */

#import <Foundation/NSObject.h>

@class LACachedExternalizedContext, NSDictionary, NSMutableDictionary, NSString;

@interface ContextPlugin : NSObject

{
    NSMutableDictionary *_internalOperationOptions;
    _Bool _contextOwner;
    NSDictionary *_resultInfo;
    LACachedExternalizedContext *_cachedExternalizedContext;
}

@property (nonatomic, readonly) _Bool contextOwner;
@property (retain, nonatomic) NSDictionary *resultInfo;
@property (nonatomic, readonly) LACachedExternalizedContext *cachedExternalizedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)pluginWithExternalizedContext:(id)arg1 reply:(CDUnknownBlockType)arg2;

- (id)externalizedContext;
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;
- (id)externalizationObserver;
- (void)setExternalizationObserver:(id)arg1;
- (id)createInternalInfo:(id)arg1 skipCallerIdentification:(_Bool)arg2 callerBundleId:(id)arg3 originator:(id)arg4;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 request:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 request:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)isCredentialSet:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setCredential:(id)arg1 type:(long long)arg2 originator:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)retryEvent:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)resetEvent:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 originator:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)initWithContextOwner:(_Bool)arg1;
- (id)createInternalInfoWithPolicy:(long long)arg1 policyOptions:(id)arg2 originator:(id)arg3;
- (void)performOp:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
