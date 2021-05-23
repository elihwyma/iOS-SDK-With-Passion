/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveResponse : PBCodable

{
    NSData *_continuationMarker;
    NSMutableArray *_zoneSummarys;
}

@property (retain, nonatomic) NSMutableArray *zoneSummarys;
@property (nonatomic, readonly) _Bool hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;

+ (Class)zoneSummaryType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addZoneSummary:(id)arg1;
- (unsigned long long)zoneSummarysCount;
- (void)clearZoneSummarys;
- (id)zoneSummaryAtIndex:(unsigned long long)arg1;

@end
