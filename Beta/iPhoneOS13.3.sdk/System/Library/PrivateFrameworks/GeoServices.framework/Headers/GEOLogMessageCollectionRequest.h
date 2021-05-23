/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class NSMutableArray;

@interface GEOLogMessageCollectionRequest : PBRequest

{
    NSMutableArray *_logMessages;
}

@property (retain, nonatomic) NSMutableArray *logMessages;

+ (_Bool)isValid:(id)arg1;
+ (Class)logMessageType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)readAll:(_Bool)arg1;
- (void)addLogMessage:(id)arg1;
- (unsigned long long)logMessagesCount;
- (void)clearLogMessages;
- (id)logMessageAtIndex:(unsigned long long)arg1;

@end
