/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@protocol AMSBagProtocol, AMSPurchaseResponseProtocol;

@interface AMSPurchaseQueueConfiguration : NSObject

{
    id <AMSBagProtocol> _bag;
    id <AMSPurchaseResponseProtocol> _delegate;
}

@property (nonatomic, readonly) id <AMSBagProtocol> bag;
@property (retain, nonatomic) id <AMSPurchaseResponseProtocol> delegate;

- (id)initWithBag:(id)arg1;

@end
