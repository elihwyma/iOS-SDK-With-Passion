/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface SPProtoAudioFileQueuePlayerSetItems : PBCodable

{
    NSString *_identifier;
    NSMutableArray *_playerItemIdentifiers;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *playerItemIdentifiers;

+ (Class)playerItemIdentifiersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPlayerItemIdentifiers:(id)arg1;
- (unsigned long long)playerItemIdentifiersCount;
- (void)clearPlayerItemIdentifiers;
- (id)playerItemIdentifiersAtIndex:(unsigned long long)arg1;
- (id)sockPuppetMessage;

@end
