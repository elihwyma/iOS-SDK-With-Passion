/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString, NSURL, NSURLRequest, SSAuthenticationContext, SSURLBag, SSURLRequestProperties, SSVFairPlaySAPSession, SSVSAPSignaturePolicy, SSVURLBagInterpreter, SSVURLDataConsumer;

@protocol SSURLConnectionRequestDelegate;

@interface SSURLConnectionRequest : SSRequest

{
    SSURLRequestProperties *_requestProperties;
    SSAuthenticationContext *_authenticationContext;
    SSVURLDataConsumer *_dataConsumer;
    NSURL *_destinationFileURL;
    _Bool _runsInProcess;
    SSVFairPlaySAPSession *_sapSession;
    SSVSAPSignaturePolicy *_sapSignaturePolicy;
    _Bool _sendsResponseForHTTPFailures;
    _Bool _shouldMescalSign;
    SSURLBag *_urlBag;
    SSVURLBagInterpreter *_urlBagInterpreter;
}

@property (copy) SSAuthenticationContext *authenticationContext;
@property (retain) SSVURLDataConsumer *dataConsumer;
@property _Bool runsInProcess;
@property _Bool sendsResponseForHTTPFailures;
@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (copy) SSVSAPSignaturePolicy *SAPSignaturePolicy;
@property (nonatomic) id <SSURLConnectionRequestDelegate> delegate;
@property (readonly) NSURLRequest *URLRequest;
@property (readonly) SSURLRequestProperties *requestProperties;
@property (copy) NSURL *destinationFileURL;
@property _Bool shouldMescalSign;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)start;
- (id)initWithURLRequest:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)configureWithURLBagDictionary:(id)arg1;
- (void)configureWithURLBag:(id)arg1;
- (id)initWithRequestProperties:(id)arg1;
- (_Bool)_canRunInProcess;
- (void)startWithConnectionResponseBlock:(CDUnknownBlockType)arg1;

@end
