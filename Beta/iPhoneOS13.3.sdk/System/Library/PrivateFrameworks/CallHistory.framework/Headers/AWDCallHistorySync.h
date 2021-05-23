/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDCallHistorySync : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _downloadRecordCount;
    unsigned int _uploadRecordCount;
    struct {
        unsigned int timestamp:1;
        unsigned int downloadRecordCount:1;
        unsigned int uploadRecordCount:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasUploadRecordCount;
@property (nonatomic) unsigned int uploadRecordCount;
@property (nonatomic) _Bool hasDownloadRecordCount;
@property (nonatomic) unsigned int downloadRecordCount;

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
