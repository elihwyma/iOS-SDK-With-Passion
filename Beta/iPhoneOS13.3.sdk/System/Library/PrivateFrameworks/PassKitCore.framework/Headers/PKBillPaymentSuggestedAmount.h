/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSDecimalNumber, NSString;

@interface PKBillPaymentSuggestedAmount : NSObject

{
    NSString *_title;
    NSString *_message;
    unsigned long long _category;
    NSDecimalNumber *_amount;
    long long _priority;
    long long _merchantCategory;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) unsigned long long category;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (nonatomic) long long merchantCategory;
@property (nonatomic) long long priority;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithAmount:(id)arg1 category:(unsigned long long)arg2;

@end
