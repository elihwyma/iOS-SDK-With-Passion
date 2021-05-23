/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSData, NSString, SSBag, SSURLBag, SSVFairPlaySAPContext, SSVURLBagInterpreter;

@protocol OS_dispatch_queue;

@interface SSVFairPlaySAPSession : NSObject

{
    SSBag *_bag;
    NSObject<OS_dispatch_queue> *_completionBlockQueue;
    NSData *_certificateData;
    SSVFairPlaySAPContext *_context;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _primed;
    SSURLBag *_urlBag;
    long long _version;
    _Bool _useSharedBagInterpreter;
    SSVURLBagInterpreter *_urlBagInterpreter;
}

@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) SSVURLBagInterpreter *urlBagInterpreter;
@property (nonatomic) _Bool useSharedBagInterpreter;
@property (nonatomic, readonly) _Bool primed;
@property (copy) NSData *certificateData;
@property (readonly) long long SAPVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithURLBagDictionary:(id)arg1;
- (id)initWithURLBag:(id)arg1;
- (_Bool)verifyData:(id)arg1 withSignature:(id)arg2 error:(id *)arg3;
- (id)signatureWithData:(id)arg1 error:(id *)arg2;
- (id)_urlBagInterpreter;
- (id)initWithSAPVersion:(long long)arg1;
- (id)initWithURLBag:(id)arg1 SAPVersion:(long long)arg2;
- (id)_initSSVFairPlaySAPSession;
- (id)initWithURLBagDictionary:(id)arg1 SAPVersion:(long long)arg2;
- (id)_establishContext;
- (_Bool)_primeTheConnection;
- (id)_signData:(id)arg1 error:(id *)arg2;
- (_Bool)_shouldRetrySAPOperationForError:(id)arg1;
- (_Bool)_verifySignature:(id)arg1 forData:(id)arg2 error:(id *)arg3;
- (void)signData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)verifySignature:(id)arg1 forData:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_loadCertificateData;
- (id)_postExchangeData:(id)arg1;
- (_Bool)_verifyPrimeResponse:(id)arg1;
- (id)initWithSSBag:(id)arg1 SAPVersion:(long long)arg2;
- (id)_initWithURLBagInterpreter:(id)arg1 SAPVersion:(long long)arg2;
- (void)establishSessionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)primeSessionWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
