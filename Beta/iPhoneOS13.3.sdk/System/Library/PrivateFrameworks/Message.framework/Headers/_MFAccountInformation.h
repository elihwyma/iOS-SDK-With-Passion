/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class DeliveryAccount, MailAccount, NSDictionary;

@interface _MFAccountInformation : NSObject

{
    MailAccount *_account;
    DeliveryAccount *_deliveryAccount;
    NSDictionary *_localizedNotes;
}

@property (retain, nonatomic) MailAccount *account;
@property (retain, nonatomic) DeliveryAccount *deliveryAccount;
@property (retain, nonatomic) NSDictionary *localizedNotes;

@end
