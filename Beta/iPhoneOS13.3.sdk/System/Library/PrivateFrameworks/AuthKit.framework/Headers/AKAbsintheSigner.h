/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface AKAbsintheSigner : NSObject

{
    struct NACContextOpaque_ *_context;
    NSDate *_contextCreationDate;
}

+ (id)sharedSigner;

- (void)dealloc;
- (void)signatureForURLRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_generateSignatureForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createSigningContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_didSigningContextExpire;
- (void)_destroySigningContext;
- (id)_sessionInfoFromCertificateData:(id)arg1;
- (void)_establishSessionWithInfo:(id)arg1 sessionURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)signatureForURLRequest:(id)arg1;

@end
