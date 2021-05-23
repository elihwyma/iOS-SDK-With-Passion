/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSPurchase, NSDictionary, NSError, NSString;

@interface AMSPurchaseResult : NSObject

{
    NSString *_correlationID;
    NSError *_error;
    AMSPurchase *_purchase;
    NSDictionary *_responseDictionary;
}

@property (copy, nonatomic) NSString *correlationID;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) AMSPurchase *purchase;
@property (copy, nonatomic) NSDictionary *responseDictionary;

@end
