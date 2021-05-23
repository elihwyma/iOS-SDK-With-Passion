/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDCallHistoryEntitlementRejection : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _pid;
    NSString *_procname;
    struct {
        unsigned int timestamp:1;
        unsigned int pid:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasPid;
@property (nonatomic) unsigned int pid;
@property (nonatomic, readonly) _Bool hasProcname;
@property (retain, nonatomic) NSString *procname;

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
