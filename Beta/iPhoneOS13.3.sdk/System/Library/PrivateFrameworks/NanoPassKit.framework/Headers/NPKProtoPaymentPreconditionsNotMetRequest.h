/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface NPKProtoPaymentPreconditionsNotMetRequest : PBRequest

{
    int _failedPrecondition;
    NSMutableArray *_passIDs;
}

@property (nonatomic) int failedPrecondition;
@property (retain, nonatomic) NSMutableArray *passIDs;

+ (Class)passIDsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPassIDs:(id)arg1;
- (unsigned long long)passIDsCount;
- (void)clearPassIDs;
- (id)passIDsAtIndex:(unsigned long long)arg1;
- (id)failedPreconditionAsString:(int)arg1;
- (int)StringAsFailedPrecondition:(id)arg1;

@end
