/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCPrivateChannelMembershipController, FCPurchaseController, NSSet, NSString;

@interface FCPurchaseProvider : NSObject <Swift>

{
    FCPurchaseController *_purchaseController;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
}

@property (nonatomic, readonly) FCPurchaseController *purchaseController;
@property (nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSSet *purchasedTagIDs;

- (id)init;
- (id)initWithPurchaseController:(id)arg1 privateChannelMembershipController:(id)arg2;

@end
