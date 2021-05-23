/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PBBProtoCompanionTermsResponse : PBCodable

{
    NSString *_responseData;
    NSString *_userAgent;
    _Bool _isExistingAccountTerms;
    _Bool _termsAccepted;
    struct {
        unsigned int isExistingAccountTerms:1;
        unsigned int termsAccepted:1;
    } _has;
}

@property (nonatomic) _Bool hasTermsAccepted;
@property (nonatomic) _Bool termsAccepted;
@property (nonatomic, readonly) _Bool hasUserAgent;
@property (retain, nonatomic) NSString *userAgent;
@property (nonatomic) _Bool hasIsExistingAccountTerms;
@property (nonatomic) _Bool isExistingAccountTerms;
@property (nonatomic, readonly) _Bool hasResponseData;
@property (retain, nonatomic) NSString *responseData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
