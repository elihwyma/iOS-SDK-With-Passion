/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SYLogPeerIDPair : PBCodable

{
    NSString *_generationID;
    NSString *_peerID;
}

@property (retain, nonatomic) NSString *peerID;
@property (nonatomic, readonly) _Bool hasGenerationID;
@property (retain, nonatomic) NSString *generationID;

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
