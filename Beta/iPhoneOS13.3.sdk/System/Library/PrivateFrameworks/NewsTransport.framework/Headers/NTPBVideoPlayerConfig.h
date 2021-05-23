/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBVideoPlayerConfig : PBCodable

{
    NSString *_discoverMoreVideosSubtitle;
    NSString *_discoverMoreVideosTitle;
    NSString *_discoverMoreVideosUrl;
}

@property (nonatomic, readonly) _Bool hasDiscoverMoreVideosTitle;
@property (retain, nonatomic) NSString *discoverMoreVideosTitle;
@property (nonatomic, readonly) _Bool hasDiscoverMoreVideosSubtitle;
@property (retain, nonatomic) NSString *discoverMoreVideosSubtitle;
@property (nonatomic, readonly) _Bool hasDiscoverMoreVideosUrl;
@property (retain, nonatomic) NSString *discoverMoreVideosUrl;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
