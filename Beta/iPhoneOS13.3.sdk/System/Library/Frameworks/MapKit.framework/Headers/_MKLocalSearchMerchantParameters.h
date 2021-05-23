/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSDate, NSNumber, NSString;

@interface _MKLocalSearchMerchantParameters : NSObject

{
    NSString *_merchantCode;
    NSString *_rawMerchantCode;
    NSString *_paymentNetwork;
    NSString *_industryCategory;
    NSNumber *_industryCode;
    NSDate *_transactionDate;
    CLLocation *_transactionLocation;
}

@property (copy, nonatomic) NSString *merchantCode;
@property (copy, nonatomic) NSString *rawMerchantCode;
@property (copy, nonatomic) NSString *paymentNetwork;
@property (copy, nonatomic) NSString *industryCategory;
@property (retain, nonatomic) NSNumber *industryCode;
@property (retain, nonatomic) NSDate *transactionDate;
@property (retain, nonatomic) CLLocation *transactionLocation;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
