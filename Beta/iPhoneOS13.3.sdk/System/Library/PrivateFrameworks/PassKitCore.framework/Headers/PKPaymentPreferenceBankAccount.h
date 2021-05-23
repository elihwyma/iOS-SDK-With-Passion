/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentPreference.h>

@class NSArray;

@interface PKPaymentPreferenceBankAccount : PKPaymentPreference

{
    NSArray *_bankAccounts;
}

@property (retain, nonatomic) NSArray *bankAccounts;

@end
