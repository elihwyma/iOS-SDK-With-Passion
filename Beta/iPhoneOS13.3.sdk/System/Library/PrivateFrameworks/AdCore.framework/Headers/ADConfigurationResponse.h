/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface ADConfigurationResponse : PBCodable

{
    int _bannerProxyType;
    NSString *_configVersion;
    NSMutableArray *_theConfigurations;
    NSString *_resourceConnectProxyURL;
    NSString *_resourceProxyURL;
    struct {
        unsigned int bannerProxyType:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *theConfigurations;
@property (nonatomic, readonly) _Bool hasResourceProxyURL;
@property (retain, nonatomic) NSString *resourceProxyURL;
@property (nonatomic, readonly) _Bool hasResourceConnectProxyURL;
@property (retain, nonatomic) NSString *resourceConnectProxyURL;
@property (nonatomic) _Bool hasBannerProxyType;
@property (nonatomic) int bannerProxyType;
@property (nonatomic, readonly) _Bool hasConfigVersion;
@property (retain, nonatomic) NSString *configVersion;

+ (Class)theConfigurationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addTheConfiguration:(id)arg1;
- (unsigned long long)theConfigurationsCount;
- (void)clearTheConfigurations;
- (id)theConfigurationAtIndex:(unsigned long long)arg1;
- (id)bannerProxyTypeAsString:(int)arg1;
- (int)StringAsBannerProxyType:(id)arg1;

@end
