/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NPKProtoCommutePlanReminderForCommutePlanAndPassResponse : PBCodable

{
    double _reminderInterval;
    NSData *_errorData;
    _Bool _pending;
    struct {
        unsigned int reminderInterval:1;
        unsigned int pending:1;
    } _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (nonatomic) _Bool hasReminderInterval;
@property (nonatomic) double reminderInterval;
@property (nonatomic, readonly) _Bool hasErrorData;
@property (retain, nonatomic) NSData *errorData;

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
