/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class LAContext, NSDictionary, NSNumber, NSString, NSXPCConnection, TKToken;

@protocol OS_dispatch_queue, TKTokenSessionDelegate, TKTokenSessionPrivateDelegate;

@interface TKTokenSession : NSObject

{
    TKToken *_token;
    id <TKTokenSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    id _keepAlive;
    LAContext *_LAContext;
    NSDictionary *_parameters;
    NSXPCConnection *_caller;
    NSNumber *_callerPID;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *name;
@property (retain, nonatomic) id keepAlive;
@property (nonatomic, readonly) LAContext *LAContext;
@property (retain) NSDictionary *parameters;
@property (nonatomic, readonly) NSXPCConnection *caller;
@property (retain) NSNumber *callerPID;
@property (readonly) id <TKTokenSessionPrivateDelegate> privateDelegate;
@property (readonly) TKToken *token;
@property (weak) id <TKTokenSessionDelegate> delegate;

- (void)terminate;
- (id)initWithToken:(id)arg1;
- (void)setCaller:(id)arg1;
- (void)endRequest;
- (void)setLAContext:(id)arg1;
- (void)auditAuthOperation:(id)arg1 auditToken:(CDStruct_6ad76789)arg2 success:(_Bool)arg3;
- (void)beginRequest;
- (void)getAdvertisedItemsWithReply:(CDUnknownBlockType)arg1;
- (void)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getAttributesOfObject:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)objectID:(id)arg1 operation:(long long)arg2 inputData:(id)arg3 algorithms:(id)arg4 parameters:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)createObjectWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deleteObject:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)evaluateAuthOperation:(id)arg1 retry:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)finalizeAuthOperation:(id)arg1 evaluatedAuthOperation:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluateAuthOperation:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)beginAuthForOperation:(long long)arg1 constraint:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (_Bool)checkOperation:(long long)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4;
- (id)errorWithResult:(id)arg1 operation:(id)arg2 forError:(id)arg3;
- (void)signData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)decryptData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)performKeyExchangeWithPublicKey:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)attestKey:(id)arg1 usingKey:(id)arg2 nonce:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)bumpKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)commitKey:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
