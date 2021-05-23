/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface KCInitialMessageData : PBCodable

{
    NSData *_prepareMessage;
}

@property (nonatomic, readonly) _Bool hasPrepareMessage;
@property (retain, nonatomic) NSData *prepareMessage;

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
