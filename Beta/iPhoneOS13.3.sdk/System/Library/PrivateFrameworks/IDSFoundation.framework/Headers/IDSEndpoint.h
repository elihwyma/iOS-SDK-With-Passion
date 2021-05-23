/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class IDSEndpointCapabilities, IDSMPPublicDeviceIdentityContainer, IDSURI, NSData, NSDate, NSError, NSString;

@interface IDSEndpoint : NSObject <Swift>

{
    BOOL _legacyVersion;
    _Bool _verifiedBusiness;
    short _ngmVersion;
    IDSURI *_URI;
    NSData *_pushToken;
    IDSEndpointCapabilities *_capabilities;
    IDSMPPublicDeviceIdentityContainer *_publicDeviceIdentityContainer;
    NSData *_serializedNGMDeviceIdentity;
    NSData *_serializedLegacyPublicIdentity;
    NSData *_serializedNGMDevicePrekey;
    NSError *_identityContainerDeserializationError;
    NSData *_KTLoggableData;
    NSData *_sessionToken;
    NSDate *_expireDate;
    NSDate *_refreshDate;
    NSString *_anonymizedSenderID;
    NSString *_senderCorrelationIdentifier;
    double _queryTimeInterval;
}

@property (retain, nonatomic) IDSURI *URI;
@property (retain, nonatomic) NSData *pushToken;
@property (retain, nonatomic) IDSMPPublicDeviceIdentityContainer *publicDeviceIdentityContainer;
@property (retain, nonatomic) IDSEndpointCapabilities *capabilities;
@property (nonatomic, readonly) NSData *serializedNGMDeviceIdentity;
@property (nonatomic, readonly) NSData *serializedLegacyPublicIdentity;
@property (nonatomic, readonly) NSData *serializedNGMDevicePrekey;
@property (nonatomic, readonly) short ngmVersion;
@property (nonatomic, readonly) BOOL legacyVersion;
@property (nonatomic, readonly) NSError *identityContainerDeserializationError;
@property (nonatomic, readonly) NSData *KTLoggableData;
@property (nonatomic, readonly) NSData *sessionToken;
@property (nonatomic, readonly) NSDate *expireDate;
@property (nonatomic, readonly) NSDate *refreshDate;
@property (nonatomic, readonly) NSString *anonymizedSenderID;
@property (nonatomic, readonly) _Bool verifiedBusiness;
@property (nonatomic, readonly) NSString *senderCorrelationIdentifier;
@property (nonatomic, readonly) double queryTimeInterval;
@property (nonatomic, readonly) NSData *serializedPublicLegacyIdentity;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURI:(id)arg1 clientData:(id)arg2 KTLoggableData:(id)arg3 pushToken:(id)arg4 sessionToken:(id)arg5 expireDate:(id)arg6 refreshDate:(id)arg7 anonymizedSenderID:(id)arg8 verifiedBusiness:(_Bool)arg9 serializedPublicMessageProtectionIdentity:(id)arg10 senderCorrelationIdentifier:(id)arg11 queryTimeInterval:(double)arg12 serializedNGMDeviceIdentity:(id)arg13 serializedNGMDevicePrekey:(id)arg14;
- (id)initWithURI:(id)arg1 capabilities:(id)arg2 ngmVersion:(short)arg3 legacyVersion:(BOOL)arg4 KTLoggableData:(id)arg5 pushToken:(id)arg6 sessionToken:(id)arg7 expireDate:(id)arg8 refreshDate:(id)arg9 anonymizedSenderID:(id)arg10 verifiedBusiness:(_Bool)arg11 serializedPublicMessageProtectionIdentity:(id)arg12 senderCorrelationIdentifier:(id)arg13 queryTimeInterval:(double)arg14 serializedNGMDeviceIdentity:(id)arg15 serializedNGMDevicePrekey:(id)arg16;
- (_Bool)isEqualToEndpoint:(id)arg1;
- (id)initWithURI:(id)arg1 clientData:(id)arg2 pushToken:(id)arg3 sessionToken:(id)arg4 expireDate:(id)arg5 refreshDate:(id)arg6;

@end
