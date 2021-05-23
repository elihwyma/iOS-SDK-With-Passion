/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKBankAccountInformation : NSObject <Swift>

{
    NSString *_accountNumber;
    NSString *_routingNumber;
    NSString *_bankName;
    NSString *_identifier;
    long long _type;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *accountNumber;
@property (copy, nonatomic) NSString *routingNumber;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *identifier;

+ (_Bool)supportsSecureCoding;
+ (Class)_classForType:(long long)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)updateToLatestKeychainData;
- (void)deleteAllBankInformation;
- (void)deleteAllLocalBankInformation;
- (void)_commonDeleteAllBankInformation;
- (id)accountSuffix;
- (id)maskedAccountNumber;

@end
