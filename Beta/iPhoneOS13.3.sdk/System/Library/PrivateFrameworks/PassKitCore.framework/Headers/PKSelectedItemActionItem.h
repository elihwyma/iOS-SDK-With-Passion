/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSDecimalNumber, NSDictionary, NSString;

@interface PKSelectedItemActionItem : NSObject <Swift>

{
    _Bool _serviceProviderDataRequiresLocalBalance;
    NSString *_identifier;
    NSString *_title;
    NSDecimalNumber *_amount;
    NSString *_currency;
    NSDate *_newExpirationDate;
    NSDictionary *_serviceProviderData;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSDecimalNumber *amount;
@property (copy, nonatomic, readonly) NSString *currency;
@property (copy, nonatomic, readonly) NSDate *newExpirationDate;
@property (copy, nonatomic, readonly) NSDictionary *serviceProviderData;
@property (nonatomic, readonly) _Bool serviceProviderDataRequiresLocalBalance;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)_processLocalizableStrings:(CDUnknownBlockType)arg1;
- (id)serviceProviderDataWithCurrentLocalBalance:(id)arg1;

@end
