/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSTelephonyController.h>

@class CTPhoneNumberInfo, CTXPCServiceSubscriptionContext, NSString;

@interface TPSPhonebookTelephonyController : TPSTelephonyController

{
    CTPhoneNumberInfo *_phoneNumberInfo;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    long long _phoneBookEntryCount;
    NSString *_updatePhoneNumber;
    CDUnknownBlockType _updatePhoneNumberInfoCompletion;
}

@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic) long long phoneBookEntryCount;
@property (retain, nonatomic) CTPhoneNumberInfo *phoneNumberInfo;
@property (copy, nonatomic) NSString *updatePhoneNumber;
@property (copy, nonatomic) CDUnknownBlockType updatePhoneNumberInfoCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)phoneBookSelected:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (void)updatePhoneNumberInfo:(id)arg1 label:(id)arg2 number:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchPhoneNumberInfo;
- (id)getPhoneNumberInfo;
- (id)getPhoneNumberInfoWithError:(id *)arg1;
- (void)fetchPhoneNumberInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)savePhoneBookEntryAtIndex:(int)arg1 withContactName:(id)arg2 contactNumber:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)selectPhoneBookWithName:(int)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)savePhoneBookEntryAtIndex:(int)arg1 withContactName:(id)arg2 contactNumber:(id)arg3;

@end
