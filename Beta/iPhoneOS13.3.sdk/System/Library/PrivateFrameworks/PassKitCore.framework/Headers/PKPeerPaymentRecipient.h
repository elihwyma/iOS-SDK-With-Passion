/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKPeerPaymentRecipient : NSObject <Swift>

{
    _Bool _allowsFormalPaymentRequests;
    NSString *_identifier;
    unsigned long long _status;
    unsigned long long _receiveMethod;
    NSString *_receiveCurrency;
    NSDecimalNumber *_minimumReceiveAmount;
    NSDecimalNumber *_maximumReceiveAmount;
    NSDate *_cacheUntil;
    NSString *_phoneOrEmail;
    NSString *_displayName;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long receiveMethod;
@property (copy, nonatomic) NSString *receiveCurrency;
@property (copy, nonatomic) NSDecimalNumber *minimumReceiveAmount;
@property (copy, nonatomic) NSDecimalNumber *maximumReceiveAmount;
@property (nonatomic) _Bool allowsFormalPaymentRequests;
@property (copy, nonatomic) NSDate *cacheUntil;
@property (copy, nonatomic) NSString *phoneOrEmail;
@property (copy, nonatomic) NSString *displayName;

+ (_Bool)supportsSecureCoding;
+ (id)recipientWithDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)cacheableCopy;

@end
