/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class NBPhoneNumberDesc, NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface NBPhoneMetaData : NSObject

{
    _Bool _sameMobileAndFixedLinePattern;
    _Bool _mainCountryForCode;
    _Bool _leadingZeroPossible;
    NBPhoneNumberDesc *_generalDesc;
    NBPhoneNumberDesc *_fixedLine;
    NBPhoneNumberDesc *_mobile;
    NBPhoneNumberDesc *_tollFree;
    NBPhoneNumberDesc *_premiumRate;
    NBPhoneNumberDesc *_sharedCost;
    NBPhoneNumberDesc *_personalNumber;
    NBPhoneNumberDesc *_voip;
    NBPhoneNumberDesc *_pager;
    NBPhoneNumberDesc *_uan;
    NBPhoneNumberDesc *_emergency;
    NBPhoneNumberDesc *_voicemail;
    NBPhoneNumberDesc *_noInternationalDialling;
    NSString *_codeID;
    NSNumber *_countryCode;
    NSString *_internationalPrefix;
    NSString *_preferredInternationalPrefix;
    NSString *_nationalPrefix;
    NSString *_preferredExtnPrefix;
    NSString *_nationalPrefixForParsing;
    NSString *_nationalPrefixTransformRule;
    NSArray *_numberFormats;
    NSArray *_intlNumberFormats;
    NSString *_leadingDigits;
}

@property (retain, nonatomic) NBPhoneNumberDesc *generalDesc;
@property (retain, nonatomic) NBPhoneNumberDesc *fixedLine;
@property (retain, nonatomic) NBPhoneNumberDesc *mobile;
@property (retain, nonatomic) NBPhoneNumberDesc *tollFree;
@property (retain, nonatomic) NBPhoneNumberDesc *premiumRate;
@property (retain, nonatomic) NBPhoneNumberDesc *sharedCost;
@property (retain, nonatomic) NBPhoneNumberDesc *personalNumber;
@property (retain, nonatomic) NBPhoneNumberDesc *voip;
@property (retain, nonatomic) NBPhoneNumberDesc *pager;
@property (retain, nonatomic) NBPhoneNumberDesc *uan;
@property (retain, nonatomic) NBPhoneNumberDesc *emergency;
@property (retain, nonatomic) NBPhoneNumberDesc *voicemail;
@property (retain, nonatomic) NBPhoneNumberDesc *noInternationalDialling;
@property (retain, nonatomic) NSString *codeID;
@property (retain, nonatomic) NSNumber *countryCode;
@property (retain, nonatomic) NSString *internationalPrefix;
@property (retain, nonatomic) NSString *preferredInternationalPrefix;
@property (retain, nonatomic) NSString *nationalPrefix;
@property (retain, nonatomic) NSString *preferredExtnPrefix;
@property (retain, nonatomic) NSString *nationalPrefixForParsing;
@property (retain, nonatomic) NSString *nationalPrefixTransformRule;
@property (nonatomic) _Bool sameMobileAndFixedLinePattern;
@property (retain, nonatomic) NSArray *numberFormats;
@property (retain, nonatomic) NSArray *intlNumberFormats;
@property (nonatomic) _Bool mainCountryForCode;
@property (retain, nonatomic) NSString *leadingDigits;
@property (nonatomic) _Bool leadingZeroPossible;

- (id)init;
- (id)description;
- (id)initWithEntry:(id)arg1;
- (id)numberFormatsFromEntry:(id)arg1;

@end
