/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString, SKProduct;

@protocol OS_dispatch_group;

@interface FCProductLookup : NSObject

{
    NSObject<OS_dispatch_group> *_productRequestGroup;
    SKProduct *_product;
}

@property (retain, nonatomic) NSObject<OS_dispatch_group> *productRequestGroup;
@property (retain, nonatomic) SKProduct *product;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)productLookupWithOfferName:(id)arg1 appAdamID:(id)arg2 storeExternalVersionID:(id)arg3;

@end
