/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitNotificationView : PBCodable <Swift>

{
    unsigned long long _dwelltimeMs;
    long long _endDate;
    long long _startDate;
    int _dismissReason;
    int _scrollBehavior;
    struct {
        unsigned int dwelltimeMs:1;
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int dismissReason:1;
        unsigned int scrollBehavior:1;
    } _has;
}

@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) long long endDate;
@property (nonatomic) _Bool hasDwelltimeMs;
@property (nonatomic) unsigned long long dwelltimeMs;
@property (nonatomic) _Bool hasDismissReason;
@property (nonatomic) int dismissReason;
@property (nonatomic) _Bool hasScrollBehavior;
@property (nonatomic) int scrollBehavior;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)dismissReasonAsString:(int)arg1;
- (int)StringAsDismissReason:(id)arg1;
- (id)scrollBehaviorAsString:(int)arg1;
- (int)StringAsScrollBehavior:(id)arg1;

@end
