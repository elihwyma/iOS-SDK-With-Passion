/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ADConfiguration : PBCodable

{
    double _expirationDate;
    NSString *_baseUrl;
    NSString *_bundleId;
    int _requestType;
    _Bool _isTest;
    struct {
        unsigned int expirationDate:1;
        unsigned int requestType:1;
        unsigned int isTest:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) _Bool hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic) _Bool hasIsTest;
@property (nonatomic) _Bool isTest;
@property (nonatomic, readonly) _Bool hasBaseUrl;
@property (retain, nonatomic) NSString *baseUrl;
@property (nonatomic) _Bool hasExpirationDate;
@property (nonatomic) double expirationDate;

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
