/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, AMSBiometricsSignatureRequest, NSArray, NSAttributedString, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetRequest : NSObject

{
    _Bool _requiresAuthorization;
    _Bool _shouldUppercaseText;
    ACAccount *_account;
    NSString *_accountHeader;
    AMSBiometricsSignatureRequest *_biometricsRequest;
    long long _confirmationTitle;
    NSString *_currencyCode;
    NSString *_countryCode;
    NSString *_displayPrice;
    NSString *_explanation;
    NSArray *_flexList;
    NSArray *_inlineImages;
    NSString *_logKey;
    NSString *_message;
    long long _payee;
    NSString *_paymentSession;
    NSString *_paymentSummary;
    NSNumber *_price;
    NSArray *_priceSectionItems;
    NSString *_ratingHeader;
    NSString *_ratingValue;
    long long _salableIcon;
    NSURL *_salableIconURL;
    NSArray *_salableInfo;
    NSAttributedString *_salableInfoLabel;
    NSString *_storeName;
    NSString *_title;
    long long _titleType;
}

@property (nonatomic, readonly) unsigned long long ams_confirmationStyle;
@property (nonatomic, readonly) unsigned long long ams_paymentRequestorType;
@property (copy, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *accountHeader;
@property (retain, nonatomic) AMSBiometricsSignatureRequest *biometricsRequest;
@property (nonatomic) long long confirmationTitle;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *displayPrice;
@property (copy, nonatomic) NSString *explanation;
@property (copy, nonatomic) NSArray *flexList;
@property (retain, nonatomic) NSArray *inlineImages;
@property (retain, nonatomic) NSString *logKey;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long payee;
@property (copy, nonatomic) NSString *paymentSession;
@property (copy, nonatomic) NSString *paymentSummary;
@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSArray *priceSectionItems;
@property (copy, nonatomic) NSString *ratingHeader;
@property (copy, nonatomic) NSString *ratingValue;
@property (nonatomic) long long salableIcon;
@property (copy, nonatomic) NSURL *salableIconURL;
@property (copy, nonatomic) NSArray *salableInfo;
@property (copy, nonatomic) NSAttributedString *salableInfoLabel;
@property (nonatomic) _Bool requiresAuthorization;
@property (nonatomic) _Bool shouldUppercaseText;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long titleType;

- (struct CGImage *)_createImageRefWithURL:(id)arg1 adornmentStyle:(long long)arg2 bag:(id)arg3;
- (unsigned long long)_countImagePlaceholderTags:(id)arg1;
- (struct CGImage *)_createRatingImageWithStringValue:(id)arg1 assetScale:(float *)arg2;
- (struct CGImage *)_createImageForResourceName:(id)arg1 outAssetScale:(float *)arg2;
- (id)_replaceImagePlaceholderTagWithImageData:(id)arg1 tag:(id)arg2 data:(id)arg3 scale:(float)arg4;
- (id)_removeAllImagePlaceholderTags:(id)arg1;
- (struct CGImage *)_createImageRefForImageSource:(struct CGImageSource *)arg1 screenScale:(float)arg2 outAssetScale:(float *)arg3;
- (long long)_imageTypeForURL:(id)arg1;
- (struct CGPath *)_createBorderPathForAdornmentStyle:(long long)arg1 iconWidth:(double)arg2 iconHeight:(double)arg3;
- (struct CGImage *)_createDefaultImageWithImageRef:(struct CGImage *)arg1 size:(struct CGSize)arg2 borderPath:(struct CGPath *)arg3;
- (struct CGImage *)_createMaskedImageRefForImageRef:(struct CGImage *)arg1 withPathRef:(struct CGPath *)arg2 andAdornmentStyle:(long long)arg3;
- (struct CGImage *)_createRGBImageRefForGreyScaleImageRef:(struct CGImage *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (struct CGImage *)_createImageMaskRefWithSize:(struct CGSize)arg1 andPath:(struct CGPath *)arg2;
- (id)ams_createSummaryItems;
- (id)ams_createContentItemForAccount;
- (id)ams_createContentItemsForFlexibleListWithCache:(id)arg1 bag:(id)arg2;
- (id)ams_createContentItemForRating;
- (id)ams_createContentItemForSalableInfoWithCache:(id)arg1 bag:(id)arg2;
- (struct CGImage *)_createResizedImageWithOriginalImage:(struct CGImage *)arg1 targetHeight:(double)arg2;

@end
