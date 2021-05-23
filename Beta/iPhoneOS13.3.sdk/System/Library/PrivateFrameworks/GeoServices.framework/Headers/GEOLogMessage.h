/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOLogMessage : PBCodable

{
    NSMutableArray *_logMsgEvents;
    unsigned int _groupRetryCount;
    int _logMessageType;
    struct {
        unsigned int has_groupRetryCount:1;
        unsigned int has_logMessageType:1;
    } _flags;
}

@property (nonatomic) _Bool hasGroupRetryCount;
@property (nonatomic) unsigned int groupRetryCount;
@property (retain, nonatomic) NSMutableArray *logMsgEvents;
@property (nonatomic) _Bool hasLogMessageType;
@property (nonatomic) int logMessageType;

+ (_Bool)isValid:(id)arg1;
+ (Class)logMsgEventType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)addLogMsgEvent:(id)arg1;
- (unsigned long long)logMsgEventsCount;
- (void)clearLogMsgEvents;
- (id)logMsgEventAtIndex:(unsigned long long)arg1;
- (id)logMessageTypeAsString:(int)arg1;
- (int)StringAsLogMessageType:(id)arg1;

@end
