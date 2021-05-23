/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface BLPurchaseResponse : NSObject

{
    NSString *_downloadID;
    NSString *_purchaseParameters;
    NSString *_permLink;
    NSNumber *_storeID;
    NSDictionary *_responseMetrics;
    NSString *_currency;
    NSString *_price;
    NSDictionary *_errorInfo;
    NSString *_errorDomain;
    NSNumber *_errorCode;
    NSString *_errorDescription;
}

@property (copy, nonatomic) NSString *downloadID;
@property (copy, nonatomic) NSString *purchaseParameters;
@property (copy, nonatomic) NSString *permLink;
@property (retain, nonatomic) NSNumber *storeID;
@property (copy, nonatomic) NSDictionary *responseMetrics;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSDictionary *errorInfo;
@property (copy, nonatomic) NSString *errorDomain;
@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
