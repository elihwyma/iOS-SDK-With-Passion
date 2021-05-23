/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface ADClientSettingsResponse : PBCodable

{
    double _expirationDate;
    NSMutableArray *_searchAdsSettingsParams;
    struct {
        unsigned int expirationDate:1;
    } _has;
}

@property (nonatomic) _Bool hasExpirationDate;
@property (nonatomic) double expirationDate;
@property (retain, nonatomic) NSMutableArray *searchAdsSettingsParams;

+ (Class)searchAdsSettingsParamsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addSearchAdsSettingsParams:(id)arg1;
- (unsigned long long)searchAdsSettingsParamsCount;
- (void)clearSearchAdsSettingsParams;
- (id)searchAdsSettingsParamsAtIndex:(unsigned long long)arg1;

@end
