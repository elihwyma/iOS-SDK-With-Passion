/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKInstallmentPlanLineItem : NSObject <Swift>

{
    long long _type;
    NSDecimalNumber *_amount;
    unsigned long long _duration;
    NSString *_itemDescription;
    long long _state;
    NSString *_identifier;
    NSDecimalNumber *_paymentsToDateAmount;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSDecimalNumber *amount;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSString *itemDescription;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDecimalNumber *paymentsToDateAmount;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToInstallmentPlanLineItem:(id)arg1;

@end
