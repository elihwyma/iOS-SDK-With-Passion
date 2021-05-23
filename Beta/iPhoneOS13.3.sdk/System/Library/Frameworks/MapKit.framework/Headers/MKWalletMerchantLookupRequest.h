/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOLocation, GEOMapServiceTraits, NSDate, NSNumber, NSString;

@interface MKWalletMerchantLookupRequest : NSObject

{
    NSString *_merchantCode;
    NSString *_rawMerchantCode;
    NSString *_industryCategory;
    NSNumber *_industryCode;
    NSString *_paymentNetwork;
    NSDate *_transactionDate;
    GEOLocation *_location;
    NSString *_terminalId;
    NSString *_transactionCurrencyCode;
    unsigned long long _transactionType;
    NSString *_transactionId;
    NSString *_warsawMerchantDomain;
    NSString *_warsawMerchantName;
    NSString *_warsawMerchantId;
    NSString *_adamId;
    NSString *_merchantId;
    NSString *_merchantDoingBizAsName;
    NSString *_merchantEnhancedName;
    NSString *_merchantCity;
    NSString *_merchantRawCity;
    NSString *_merchantState;
    NSString *_merchantRawState;
    NSString *_merchantZip;
    NSString *_merchantAddress;
    NSString *_merchantRawAddress;
    NSString *_merchantCountryCode;
    NSString *_merchantType;
    NSNumber *_merchantCleanConfidenceLevel;
    NSString *_merchantAdditionalData;
    NSString *_merchantCanl;
    NSNumber *_fuzzyMatched;
    GEOMapServiceTraits *_traits;
}

@property (copy, nonatomic) NSString *merchantCode;
@property (copy, nonatomic) NSString *rawMerchantCode;
@property (copy, nonatomic) NSString *industryCategory;
@property (copy, nonatomic) NSNumber *industryCode;
@property (copy, nonatomic) NSString *paymentNetwork;
@property (copy, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) GEOLocation *location;
@property (copy, nonatomic) NSString *terminalId;
@property (copy, nonatomic) NSString *transactionCurrencyCode;
@property (nonatomic) unsigned long long transactionType;
@property (copy, nonatomic) NSString *transactionId;
@property (copy, nonatomic) NSString *warsawMerchantDomain;
@property (copy, nonatomic) NSString *warsawMerchantName;
@property (copy, nonatomic) NSString *warsawMerchantId;
@property (copy, nonatomic) NSString *adamId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *merchantDoingBizAsName;
@property (copy, nonatomic) NSString *merchantEnhancedName;
@property (copy, nonatomic) NSString *merchantCity;
@property (copy, nonatomic) NSString *merchantRawCity;
@property (copy, nonatomic) NSString *merchantState;
@property (copy, nonatomic) NSString *merchantRawState;
@property (copy, nonatomic) NSString *merchantZip;
@property (copy, nonatomic) NSString *merchantAddress;
@property (copy, nonatomic) NSString *merchantRawAddress;
@property (copy, nonatomic) NSString *merchantCountryCode;
@property (copy, nonatomic) NSString *merchantType;
@property (copy, nonatomic) NSNumber *merchantCleanConfidenceLevel;
@property (copy, nonatomic) NSString *merchantAdditionalData;
@property (copy, nonatomic) NSString *merchantCanl;
@property (copy, nonatomic) NSNumber *fuzzyMatched;
@property (copy, nonatomic) GEOMapServiceTraits *traits;

@end
