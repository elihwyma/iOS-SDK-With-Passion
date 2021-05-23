/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SPProtoAudioFilePlayerItemSetCurrentTime : PBCodable

{
    double _currentTime;
    NSString *_identifier;
    struct {
        unsigned int currentTime:1;
    } _has;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasCurrentTime;
@property (nonatomic) double currentTime;

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
