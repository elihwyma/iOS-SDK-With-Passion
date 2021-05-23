/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSDictionary, NSString, NSURLSession, PKPass, PKValueAddedServiceTransaction;

@interface PKValueAddedServiceWebService : NSObject

{
    PKValueAddedServiceTransaction *_valueAddedTransaction;
    NSURLSession *_urlSession;
    NSDictionary *_merchantPayload;
    PKPass *_pass;
}

@property (nonatomic, readonly) NSDictionary *merchantPayload;
@property (nonatomic, readonly) PKPass *pass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithValueAddedServiceTransaction:(id)arg1;
- (void)downloadMerchantPayloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadPassWithCompletion:(CDUnknownBlockType)arg1;

@end
