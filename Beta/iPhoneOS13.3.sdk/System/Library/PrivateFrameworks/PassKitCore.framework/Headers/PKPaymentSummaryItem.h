/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKPaymentSummaryItem : NSObject <Swift>

{
    _Bool _useDarkColor;
    NSString *_label;
    NSDecimalNumber *_amount;
    unsigned long long _type;
    NSString *_localizedAmount;
}

@property (retain, nonatomic) NSString *localizedAmount;
@property (nonatomic) _Bool useDarkColor;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (nonatomic) unsigned long long type;

+ (_Bool)supportsSecureCoding;
+ (long long)version;
+ (id)summaryItemWithLabel:(id)arg1 amount:(id)arg2;
+ (id)summaryItemWithLabel:(id)arg1 amount:(id)arg2 type:(unsigned long long)arg3;
+ (id)itemWithProtobuf:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)protobuf;
- (_Bool)isEqualToPaymentSummaryItem:(id)arg1;

@end
