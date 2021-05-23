/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class MSPMediaSyncError, MSPMediaSyncHeader, MSPMediaSyncOperation;

@interface MSPMediaSyncPackage : PBCodable

{
    MSPMediaSyncError *_error;
    MSPMediaSyncHeader *_header;
    MSPMediaSyncOperation *_syncOperation;
    int _type;
    _Bool _lastPackage;
    struct {
        unsigned int type:1;
        unsigned int lastPackage:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasLastPackage;
@property (nonatomic) _Bool lastPackage;
@property (nonatomic, readonly) _Bool hasHeader;
@property (retain, nonatomic) MSPMediaSyncHeader *header;
@property (nonatomic, readonly) _Bool hasSyncOperation;
@property (retain, nonatomic) MSPMediaSyncOperation *syncOperation;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) MSPMediaSyncError *error;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
