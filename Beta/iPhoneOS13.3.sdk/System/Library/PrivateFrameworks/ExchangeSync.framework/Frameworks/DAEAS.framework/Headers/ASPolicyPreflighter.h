/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@class ASAccount, ASPolicy, ASTaskManager, NSString;

@protocol ASPolicyPreflighterDelegate;

@interface ASPolicyPreflighter : NSObject

{
    _Bool _invalidated;
    ASAccount *_account;
    id <ASPolicyPreflighterDelegate> _delegate;
    id _contextInfo;
    ASPolicy *_policy;
    ASPolicy *_acknowledgedPolicy;
    NSString *_originalKey;
    ASTaskManager *_taskManager;
}

@property (weak, nonatomic) ASAccount *account;
@property (retain, nonatomic) ASPolicy *policy;
@property (retain, nonatomic) ASPolicy *acknowledgedPolicy;
@property (copy, nonatomic) NSString *originalKey;
@property (retain, nonatomic) ASTaskManager *taskManager;
@property (nonatomic) _Bool invalidated;
@property (weak, nonatomic) id <ASPolicyPreflighterDelegate> delegate;
@property (weak, nonatomic) id contextInfo;

- (void)dealloc;
- (void)invalidate;
- (id)initWithAccount:(id)arg1 policyKey:(id)arg2;
- (id)_originalKey;
- (void)provisionTask:(id)arg1 failedWithError:(id)arg2;
- (void)provisionTask:(id)arg1 wipeRequested:(_Bool)arg2 accountOnlyRipeRequested:(_Bool)arg3 policies:(id)arg4 status:(long long)arg5;
- (void)startPreflight;
- (void)acknowledgePolicyCompliance;
- (void)acknowledgeIntentionToRemoteWipe;
- (void)acknowledgeAccountOnlyRemoteWipeWithSuccess:(_Bool)arg1;
- (void)cancelPendingPreflightRequest;

@end
