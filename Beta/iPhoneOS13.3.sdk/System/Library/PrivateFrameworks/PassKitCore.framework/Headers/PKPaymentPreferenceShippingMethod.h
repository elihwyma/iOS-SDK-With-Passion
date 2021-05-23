/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentPreference.h>

@class NSString;

@interface PKPaymentPreferenceShippingMethod : PKPaymentPreference

{
    NSString *_currency;
}

@property (copy, nonatomic) NSString *currency;

- (_Bool)supportsDeletion;

@end
