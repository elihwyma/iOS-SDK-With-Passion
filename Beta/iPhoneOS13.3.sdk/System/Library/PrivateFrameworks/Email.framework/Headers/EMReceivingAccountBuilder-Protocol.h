/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@class EMDeliveryAccount, NSArray, NSString;

@protocol EMReceivingAccountBuilder <Swift>

@property (retain, nonatomic) EMDeliveryAccount *deliveryAccount;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (nonatomic) _Bool sourceIsManaged;
@property (nonatomic) _Bool shouldArchiveByDefault;
@property (copy, nonatomic) NSString *statisticsKind;

@end
