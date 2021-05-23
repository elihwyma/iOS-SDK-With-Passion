/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface NPKProtoSetCommutePlanReminderForCommutePlanAndPassRequest : PBRequest

{
    double _reminderInterval;
    NSData *_commutePlanBytes;
    NSString *_uniqueID;
    struct {
        unsigned int reminderInterval:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic, readonly) _Bool hasCommutePlanBytes;
@property (retain, nonatomic) NSData *commutePlanBytes;
@property (nonatomic) _Bool hasReminderInterval;
@property (nonatomic) double reminderInterval;

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
