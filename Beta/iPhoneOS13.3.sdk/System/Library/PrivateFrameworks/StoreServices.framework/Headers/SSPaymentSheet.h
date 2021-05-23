/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSAttributedString, NSDictionary, NSLock, NSNumber, NSString, NSURL;

@interface SSPaymentSheet : NSObject

{
    NSLock *_lock;
    _Bool _applePayClassic;
    _Bool _shouldShowCardPicker;
    _Bool _shouldSuppressPrice;
    _Bool _shouldUppercaseText;
    NSString *_accountHeader;
    NSString *_buyParams;
    NSString *_dialogId;
    NSString *_displayPrice;
    NSAttributedString *_displayPriceLabel;
    NSString *_explanation;
    NSString *_paymentSummary;
    NSString *_ratingHeader;
    NSString *_ratingValue;
    NSURL *_salableIconURL;
    NSString *_salableIconURLString;
    NSArray *_salableInfo;
    NSAttributedString *_salableInfoLabel;
    NSString *_storeName;
    NSString *_accountName;
    long long _confirmationTitleType;
    NSString *_countryCode;
    NSString *_currencyCode;
    NSArray *_flexList;
    NSArray *_inlineImages;
    NSDictionary *_merchantSession;
    NSString *_message;
    long long _payeeType;
    NSNumber *_price;
    NSArray *_priceSectionItems;
    long long _salableIconType;
    NSString *_title;
    long long _titleType;
}

@property (copy) NSString *accountHeader;
@property (copy) NSString *accountName;
@property (copy, readonly) NSString *buyParams;
@property long long confirmationTitleType;
@property (copy) NSString *countryCode;
@property (copy) NSString *currencyCode;
@property (copy) NSString *dialogId;
@property (copy) NSString *displayPrice;
@property (copy, readonly) NSAttributedString *displayPriceLabel;
@property (copy) NSString *explanation;
@property (readonly) NSArray *flexList;
@property (copy, readonly) NSArray *inlineImages;
@property (getter=isApplePayClassic) _Bool applePayClassic;
@property (copy) NSDictionary *merchantSession;
@property (copy) NSString *message;
@property long long payeeType;
@property (copy) NSString *paymentSummary;
@property (copy) NSNumber *price;
@property (copy) NSArray *priceSectionItems;
@property (copy) NSString *ratingHeader;
@property (copy) NSString *ratingValue;
@property long long salableIconType;
@property (copy, readonly) NSURL *salableIconURL;
@property (copy) NSString *salableIconURLString;
@property (copy) NSArray *salableInfo;
@property (copy, readonly) NSAttributedString *salableInfoLabel;
@property _Bool shouldShowCardPicker;
@property _Bool shouldSuppressPrice;
@property _Bool shouldUppercaseText;
@property (copy) NSString *storeName;
@property (copy) NSString *title;
@property long long titleType;

+ (id)stringWithFormattedUsernameForString:(id)arg1 username:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_lock;
- (void)_init;
- (void)_unlock;
- (id)initWithServerResponse:(id)arg1;
- (id)_replaceMarkupForMutableAttributedString:(id)arg1 markupType:(long long)arg2;
- (id)_replaceBreakingSpaceMarkupForMutableAttributedString:(id)arg1;
- (id)_greyAttributedStringForAttributedString:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)_parseResponse:(id)arg1;
- (long long)_inferSalableIconTypeWithBuyParams:(id)arg1;
- (id)_displayPriceLabelForDisplayPrice:(id)arg1;
- (id)_attributedStringForSalableInfoStringArray:(id)arg1;
- (void)_salableInfoItemsToUppercase;
- (id)_attributedStringForString:(id)arg1;
- (long long)_payeeTypeForRequestorValue:(id)arg1;
- (long long)_payeeTypeInferredFromEnumeratedTitle;
- (long long)_salableIconTypeForString:(id)arg1;
- (long long)_confirmationTitleTypeForStringValue:(id)arg1;
- (id)_attributedStringForStringArray:(id)arg1 useGrey:(_Bool)arg2;
- (void)_stringValuesToUppercase;
- (id)defaultAuthKitAuthenticationContext;
- (id)initWithServerResponse:(id)arg1 buyParams:(id)arg2;

@end
