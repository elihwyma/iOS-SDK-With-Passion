/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface ATXNotificationsPBPeriodicLog : PBCodable

{
    unsigned long long _periodEnd;
    unsigned long long _periodStart;
    NSMutableArray *_datas;
    NSString *_userId;
    struct {
        unsigned int periodEnd:1;
        unsigned int periodStart:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) _Bool hasPeriodStart;
@property (nonatomic) unsigned long long periodStart;
@property (nonatomic) _Bool hasPeriodEnd;
@property (nonatomic) unsigned long long periodEnd;
@property (retain, nonatomic) NSMutableArray *datas;

+ (Class)dataType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)datasCount;
- (void)clearDatas;
- (void)addData:(id)arg1;

@end
