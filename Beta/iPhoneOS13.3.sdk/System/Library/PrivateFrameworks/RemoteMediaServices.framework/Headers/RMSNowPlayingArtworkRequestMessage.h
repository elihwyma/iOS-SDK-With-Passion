/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RMSNowPlayingArtworkRequestMessage : PBCodable

{
    NSString *_artworkIdentifier;
    float _compressionQuality;
    unsigned int _height;
    unsigned int _width;
    struct {
        unsigned int compressionQuality:1;
        unsigned int height:1;
        unsigned int width:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasArtworkIdentifier;
@property (retain, nonatomic) NSString *artworkIdentifier;
@property (nonatomic) _Bool hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) _Bool hasHeight;
@property (nonatomic) unsigned int height;
@property (nonatomic) _Bool hasCompressionQuality;
@property (nonatomic) float compressionQuality;

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
