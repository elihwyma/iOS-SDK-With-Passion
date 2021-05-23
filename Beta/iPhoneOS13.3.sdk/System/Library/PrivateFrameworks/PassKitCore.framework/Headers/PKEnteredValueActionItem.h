/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDecimalNumber, NSDictionary, NSString;

@interface PKEnteredValueActionItem : NSObject <Swift>

{
    _Bool _maxAmountIncludesLocalBalance;
    NSDecimalNumber *_minLoadAmount;
    NSDecimalNumber *_maxLoadAmount;
    NSDecimalNumber *_minLoadedBalance;
    NSDecimalNumber *_maxLoadedBalance;
    NSArray *_defaultSuggestions;
    NSArray *_lowBalanceReminderOptions;
    NSString *_currency;
    NSDictionary *_serviceProviderData;
}

@property (copy, nonatomic, readonly) NSDecimalNumber *minLoadAmount;
@property (copy, nonatomic, readonly) NSDecimalNumber *maxLoadAmount;
@property (copy, nonatomic, readonly) NSDecimalNumber *minLoadedBalance;
@property (copy, nonatomic, readonly) NSDecimalNumber *maxLoadedBalance;
@property (copy, nonatomic, readonly) NSArray *defaultSuggestions;
@property (copy, nonatomic, readonly) NSArray *lowBalanceReminderOptions;
@property (nonatomic, readonly) _Bool maxAmountIncludesLocalBalance;
@property (copy, nonatomic, readonly) NSString *currency;
@property (copy, nonatomic, readonly) NSDictionary *serviceProviderData;
@property (copy, nonatomic, readonly) NSDecimalNumber *minAmount;
@property (copy, nonatomic, readonly) NSDecimalNumber *maxAmount;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)_processLocalizableStrings:(CDUnknownBlockType)arg1;

@end
