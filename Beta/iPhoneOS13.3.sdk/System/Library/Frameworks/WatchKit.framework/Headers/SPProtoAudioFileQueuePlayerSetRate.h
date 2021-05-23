/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SPProtoAudioFileQueuePlayerSetRate : PBCodable

{
    NSString *_identifier;
    float _rate;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) float rate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sockPuppetMessage;

@end
