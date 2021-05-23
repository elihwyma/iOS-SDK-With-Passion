/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKAccountAction : NSObject <Swift>

{
    unsigned long long _actionType;
    NSString *_identifier;
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
    unsigned long long _redemptionType;
}

@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDecimalNumber *amount;
@property (retain, nonatomic) NSString *currencyCode;
@property (nonatomic) unsigned long long redemptionType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
