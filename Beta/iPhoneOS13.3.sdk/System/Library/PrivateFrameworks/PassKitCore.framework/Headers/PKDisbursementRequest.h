/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDecimalNumber, NSString;

@interface PKDisbursementRequest : NSObject <Swift>

{
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
    NSString *_countryCode;
    long long _requestSchedule;
    NSArray *_summaryItems;
}

@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) long long requestSchedule;
@property (copy, nonatomic) NSArray *summaryItems;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToDisbursementRequest:(id)arg1;

@end
