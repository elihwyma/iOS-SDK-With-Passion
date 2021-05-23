/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSDate, NSString, SKUIGiftTheme, SKUIItem;

@interface SKUIGift : NSObject <Swift>

{
    long long _category;
    NSDate *_deliveryDate;
    long long _giftAmount;
    NSString *_giftAmountString;
    SKUIItem *_item;
    NSString *_message;
    NSArray *_recipientAddresses;
    NSString *_senderEmailAddress;
    NSString *_senderName;
    SKUIGiftTheme *_theme;
    NSString *_totalGiftAmountString;
}

@property (copy, nonatomic) NSString *totalGiftAmountString;
@property (copy, nonatomic) SKUIGiftTheme *theme;
@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, readonly) long long giftCategory;
@property (copy, nonatomic) NSDate *deliveryDate;
@property (nonatomic) long long giftAmount;
@property (copy, nonatomic) NSString *giftAmountString;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *recipientAddresses;
@property (copy, nonatomic) NSString *senderEmailAddress;
@property (copy, nonatomic) NSString *senderName;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (id)initWithItem:(id)arg1;
- (id)initWithGiftCategory:(long long)arg1;
- (id)HTTPBodyDictionary;

@end
