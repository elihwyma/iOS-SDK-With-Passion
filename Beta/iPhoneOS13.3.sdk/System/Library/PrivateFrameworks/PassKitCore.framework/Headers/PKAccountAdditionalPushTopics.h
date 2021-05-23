/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKAccountAdditionalPushTopics : NSObject <Swift>

{
    NSString *_account;
    NSString *_extendedAccount;
    NSString *_payments;
}

@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *extendedAccount;
@property (copy, nonatomic) NSString *payments;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
