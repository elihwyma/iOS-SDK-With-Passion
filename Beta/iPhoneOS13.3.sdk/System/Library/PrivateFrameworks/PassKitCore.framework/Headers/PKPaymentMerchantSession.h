/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@interface PKPaymentMerchantSession : NSObject <Swift>

{
    unsigned long long _epochTimestamp;
    unsigned long long _expiresAt;
    NSString *_merchantSessionIdentifier;
    NSString *_nonce;
    NSString *_merchantIdentifier;
    NSString *_domain;
    NSString *_displayName;
    NSString *_initiativeContext;
    NSString *_initiative;
    NSData *_ampEnrollmentPinning;
    NSArray *_signedFields;
    NSData *_signature;
    NSString *_retryNonce;
}

@property (nonatomic, readonly) unsigned long long epochTimestamp;
@property (nonatomic, readonly) unsigned long long expiresAt;
@property (nonatomic, readonly) NSString *merchantSessionIdentifier;
@property (nonatomic, readonly) NSString *nonce;
@property (nonatomic, readonly) NSString *merchantIdentifier;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *initiativeContext;
@property (nonatomic, readonly) NSString *initiative;
@property (nonatomic, readonly) NSData *ampEnrollmentPinning;
@property (nonatomic, readonly) NSArray *signedFields;
@property (nonatomic, readonly) NSData *signature;
@property (retain, nonatomic) NSString *retryNonce;

+ (_Bool)supportsSecureCoding;
+ (long long)version;
+ (id)paymentMerchantSessionWithProtobuf:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)supportsURL:(id)arg1;
- (id)protobuf;
- (id)signedData;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 domain:(id)arg5 displayName:(id)arg6 signature:(id)arg7;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 domain:(id)arg6 displayName:(id)arg7 signature:(id)arg8;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 ampEnrollmentPinning:(id)arg9 signedFields:(id)arg10 signature:(id)arg11;
- (_Bool)_isModern;
- (_Bool)isEqualToPaymentMerchantSession:(id)arg1;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 signedFields:(id)arg9 signature:(id)arg10;

@end
