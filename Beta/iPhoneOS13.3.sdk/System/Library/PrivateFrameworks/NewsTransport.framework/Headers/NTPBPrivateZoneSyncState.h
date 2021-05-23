/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, NTPBDate;

@interface NTPBPrivateZoneSyncState : PBCodable

{
    NSData *_changeToken;
    NTPBDate *_lastCleanDate;
    NTPBDate *_lastDirtyDate;
    NSString *_zoneName;
}

@property (nonatomic, readonly) _Bool hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (nonatomic, readonly) _Bool hasChangeToken;
@property (retain, nonatomic) NSData *changeToken;
@property (nonatomic, readonly) _Bool hasLastCleanDate;
@property (retain, nonatomic) NTPBDate *lastCleanDate;
@property (nonatomic, readonly) _Bool hasLastDirtyDate;
@property (retain, nonatomic) NTPBDate *lastDirtyDate;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
