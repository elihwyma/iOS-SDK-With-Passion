/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface NPKProtoSecureElementRemoveAppletsRequest : PBRequest

{
    NSMutableArray *_cardAIDs;
}

@property (retain, nonatomic) NSMutableArray *cardAIDs;

+ (Class)cardAIDsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCardAIDs:(id)arg1;
- (unsigned long long)cardAIDsCount;
- (void)clearCardAIDs;
- (id)cardAIDsAtIndex:(unsigned long long)arg1;

@end
