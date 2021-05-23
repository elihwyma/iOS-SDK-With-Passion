/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSVOperation.h>

@class NSDictionary, SSURLBag, SSVFairPlaySAPSession;

@interface SSVComplexOperation : SSVOperation

{
    SSVFairPlaySAPSession *_sapSession;
    SSURLBag *_urlBag;
    NSDictionary *_urlBagDictionary;
}

@property (copy, readonly) NSDictionary *URLBagDictionary;
@property (retain) SSVFairPlaySAPSession *SAPSession;

- (void)configureWithURLBagDictionary:(id)arg1;
- (void)configureWithURLBag:(id)arg1;
- (id)newLoadURLOperationWithRequest:(id)arg1;

@end
