/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ProtocolBuffer/PBCodable.h>

@interface RMRemoteManagementScreenTimeNumberOfLimits : PBCodable

{
    unsigned long long _numberOfAppLimits;
    unsigned long long _numberOfCategoryLimits;
    unsigned long long _timestamp;
    struct {
        unsigned int numberOfAppLimits:1;
        unsigned int numberOfCategoryLimits:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasNumberOfAppLimits;
@property (nonatomic) unsigned long long numberOfAppLimits;
@property (nonatomic) _Bool hasNumberOfCategoryLimits;
@property (nonatomic) unsigned long long numberOfCategoryLimits;

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
