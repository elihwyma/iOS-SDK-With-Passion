/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ATPError : PBCodable

{
    long long _domainCode;
    int _code;
    NSString *_domain;
    NSString *_errorDescription;
    struct {
        unsigned int domainCode:1;
        unsigned int code:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) _Bool hasDomainCode;
@property (nonatomic) long long domainCode;
@property (nonatomic) _Bool hasCode;
@property (nonatomic) int code;
@property (nonatomic, readonly) _Bool hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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
