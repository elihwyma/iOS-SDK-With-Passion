/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueContextProtobuf;

@interface _MRPlaybackQueueRequestProtobuf : PBCodable

{
    double _artworkHeight;
    double _artworkWidth;
    int _cachingPolicy;
    NSMutableArray *_contentItemIdentifiers;
    _MRPlaybackQueueContextProtobuf *_context;
    NSString *_label;
    int _length;
    int _location;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSString *_requestID;
    _Bool _includeInfo;
    _Bool _includeLanguageOptions;
    _Bool _includeLyrics;
    _Bool _includeMetadata;
    _Bool _includeSections;
    _Bool _isLegacyNowPlayingInfoRequest;
    _Bool _returnContentItemAssetsInUserCompletion;
    struct {
        unsigned int artworkHeight:1;
        unsigned int artworkWidth:1;
        unsigned int cachingPolicy:1;
        unsigned int length:1;
        unsigned int location:1;
        unsigned int includeInfo:1;
        unsigned int includeLanguageOptions:1;
        unsigned int includeLyrics:1;
        unsigned int includeMetadata:1;
        unsigned int includeSections:1;
        unsigned int isLegacyNowPlayingInfoRequest:1;
        unsigned int returnContentItemAssetsInUserCompletion:1;
    } _has;
}

@property (nonatomic) _Bool hasLocation;
@property (nonatomic) int location;
@property (nonatomic) _Bool hasLength;
@property (nonatomic) int length;
@property (nonatomic) _Bool hasIncludeMetadata;
@property (nonatomic) _Bool includeMetadata;
@property (nonatomic) _Bool hasArtworkWidth;
@property (nonatomic) double artworkWidth;
@property (nonatomic) _Bool hasArtworkHeight;
@property (nonatomic) double artworkHeight;
@property (nonatomic) _Bool hasIncludeLyrics;
@property (nonatomic) _Bool includeLyrics;
@property (nonatomic) _Bool hasIncludeSections;
@property (nonatomic) _Bool includeSections;
@property (nonatomic) _Bool hasIncludeInfo;
@property (nonatomic) _Bool includeInfo;
@property (nonatomic) _Bool hasIncludeLanguageOptions;
@property (nonatomic) _Bool includeLanguageOptions;
@property (nonatomic, readonly) _Bool hasContext;
@property (retain, nonatomic) _MRPlaybackQueueContextProtobuf *context;
@property (nonatomic, readonly) _Bool hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSMutableArray *contentItemIdentifiers;
@property (nonatomic) _Bool hasReturnContentItemAssetsInUserCompletion;
@property (nonatomic) _Bool returnContentItemAssetsInUserCompletion;
@property (nonatomic, readonly) _Bool hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) _Bool hasCachingPolicy;
@property (nonatomic) int cachingPolicy;
@property (nonatomic, readonly) _Bool hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) _Bool hasIsLegacyNowPlayingInfoRequest;
@property (nonatomic) _Bool isLegacyNowPlayingInfoRequest;

+ (void)initialize;
+ (Class)contentItemIdentifiersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)customDescription;
- (void)addContentItemIdentifiers:(id)arg1;
- (unsigned long long)contentItemIdentifiersCount;
- (void)clearContentItemIdentifiers;
- (id)contentItemIdentifiersAtIndex:(unsigned long long)arg1;
- (id)customDictionaryRepresentation;

@end
