/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface RMRemoteManagementScreenTimeLimitUsageChange : PBCodable

{
    unsigned long long _timestamp;
    NSMutableArray *_categoryLimits;
    CDStruct_b5306035 _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *categoryLimits;

+ (Class)categoryLimitType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCategoryLimit:(id)arg1;
- (unsigned long long)categoryLimitsCount;
- (void)clearCategoryLimits;
- (id)categoryLimitAtIndex:(unsigned long long)arg1;

@end
