/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURLSessionTask, VSAuditToken, VSOptional, VSStoreURLBag;

@interface VSVerificationStateResetOperation : VSAsyncOperation

{
    VSAuditToken *_auditToken;
    VSOptional *_result;
    VSStoreURLBag *_bag;
    NSURLSessionTask *_resetStateTask;
}

@property (retain, nonatomic) VSStoreURLBag *bag;
@property (retain, nonatomic) NSURLSessionTask *resetStateTask;
@property (retain, nonatomic) VSOptional *result;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (void)cancel;
- (void)executionDidBegin;
- (void)_resetVerificationStateWithURL:(id)arg1;

@end
