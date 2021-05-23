/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface NPKProtoBalanceReminderForBalanceAndPassRequest : PBRequest

{
    NSData *_balanceBytes;
    NSString *_uniqueID;
}

@property (nonatomic, readonly) _Bool hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic, readonly) _Bool hasBalanceBytes;
@property (retain, nonatomic) NSData *balanceBytes;

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
