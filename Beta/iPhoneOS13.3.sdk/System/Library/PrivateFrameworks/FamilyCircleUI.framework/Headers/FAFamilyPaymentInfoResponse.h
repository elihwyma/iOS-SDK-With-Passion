/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <AppleAccount/AAResponse.h>

@class FAFamilyCreditCard;

@interface FAFamilyPaymentInfoResponse : AAResponse

{
    FAFamilyCreditCard *_creditCard;
}

@property (retain, nonatomic) FAFamilyCreditCard *creditCard;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
