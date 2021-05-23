/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NPKProtoRelevantPassTuple : PBCodable

{
    NSString *_passID;
    NSString *_relevantText;
}

@property (retain, nonatomic) NSString *passID;
@property (nonatomic, readonly) _Bool hasRelevantText;
@property (retain, nonatomic) NSString *relevantText;

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
