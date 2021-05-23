/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray, NSString;

@interface NPKProtoHandleBalanceChangeRequest : PBRequest

{
    NSMutableArray *_balanceBytes;
    NSString *_passID;
}

@property (nonatomic, readonly) _Bool hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *balanceBytes;

+ (Class)balanceBytesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addBalanceBytes:(id)arg1;
- (unsigned long long)balanceBytesCount;
- (void)clearBalanceBytes;
- (id)balanceBytesAtIndex:(unsigned long long)arg1;

@end
