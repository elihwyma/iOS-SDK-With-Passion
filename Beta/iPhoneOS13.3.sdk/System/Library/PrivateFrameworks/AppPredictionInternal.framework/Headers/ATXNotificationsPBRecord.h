/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class ATXNotificationsPBContext, NSMutableArray, NSString;

@interface ATXNotificationsPBRecord : PBCodable

{
    NSString *_bundleId;
    ATXNotificationsPBContext *_context;
    NSMutableArray *_events;
    int _suppActions;
    int _timezone;
    NSString *_topic;
    CDStruct_65e6390a _has;
}

@property (nonatomic, readonly) _Bool hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic, readonly) _Bool hasTopic;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic, readonly) _Bool hasContext;
@property (retain, nonatomic) ATXNotificationsPBContext *context;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) _Bool hasSuppActions;
@property (nonatomic) int suppActions;
@property (nonatomic) _Bool hasTimezone;
@property (nonatomic) int timezone;

+ (Class)eventsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addEvents:(id)arg1;
- (unsigned long long)eventsCount;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)arg1;

@end
