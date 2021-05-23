/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBVideoGroupsConfig : PBCodable

{
    long long _moreFromPublisherBarTime;
    long long _moreVideosGroupMaxNumberOfVideos;
    long long _moreVideosGroupMinNumberOfVideos;
    long long _nowPlayingBarTime;
    long long _upNextBarTime;
    int _moreVideosGroupFilterOption;
    int _moreVideosGroupSortOption;
    _Bool _moreFromPublisherBarEnabled;
    _Bool _playsMutedByDefault;
    struct {
        unsigned int moreFromPublisherBarTime:1;
        unsigned int moreVideosGroupMaxNumberOfVideos:1;
        unsigned int moreVideosGroupMinNumberOfVideos:1;
        unsigned int nowPlayingBarTime:1;
        unsigned int upNextBarTime:1;
        unsigned int moreVideosGroupFilterOption:1;
        unsigned int moreVideosGroupSortOption:1;
        unsigned int moreFromPublisherBarEnabled:1;
        unsigned int playsMutedByDefault:1;
    } _has;
}

@property (nonatomic) _Bool hasPlaysMutedByDefault;
@property (nonatomic) _Bool playsMutedByDefault;
@property (nonatomic) _Bool hasNowPlayingBarTime;
@property (nonatomic) long long nowPlayingBarTime;
@property (nonatomic) _Bool hasUpNextBarTime;
@property (nonatomic) long long upNextBarTime;
@property (nonatomic) _Bool hasMoreFromPublisherBarTime;
@property (nonatomic) long long moreFromPublisherBarTime;
@property (nonatomic) _Bool hasMoreFromPublisherBarEnabled;
@property (nonatomic) _Bool moreFromPublisherBarEnabled;
@property (nonatomic) _Bool hasMoreVideosGroupSortOption;
@property (nonatomic) int moreVideosGroupSortOption;
@property (nonatomic) _Bool hasMoreVideosGroupFilterOption;
@property (nonatomic) int moreVideosGroupFilterOption;
@property (nonatomic) _Bool hasMoreVideosGroupMinNumberOfVideos;
@property (nonatomic) long long moreVideosGroupMinNumberOfVideos;
@property (nonatomic) _Bool hasMoreVideosGroupMaxNumberOfVideos;
@property (nonatomic) long long moreVideosGroupMaxNumberOfVideos;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
