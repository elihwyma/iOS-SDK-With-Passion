/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDictionary, NTPBVideoGroupsConfig;

@interface FCVideoGroupsConfig : NSObject <Swift>

{
    unsigned long long _moreVideosGroupSortOption;
    unsigned long long _moreVideosGroupFilterOption;
    NTPBVideoGroupsConfig *_pbVideoGroupsConfig;
    NSDictionary *_configDictionary;
}

@property (copy, nonatomic) NTPBVideoGroupsConfig *pbVideoGroupsConfig;
@property (copy, nonatomic) NSDictionary *configDictionary;
@property (nonatomic, readonly) _Bool playsMutedByDefault;
@property (nonatomic, readonly) long long nowPlayingBarTime;
@property (nonatomic, readonly) long long upNextBarTime;
@property (nonatomic, readonly) long long moreFromPublisherBarTime;
@property (nonatomic, readonly) _Bool moreFromPublisherBarEnabled;
@property (nonatomic) unsigned long long moreVideosGroupSortOption;
@property (nonatomic) unsigned long long moreVideosGroupFilterOption;
@property (nonatomic, readonly) long long moreVideosGroupMinNumberOfVideos;
@property (nonatomic, readonly) long long moreVideosGroupMaxNumberOfVideos;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithVideoGroupsConfig:(id)arg1;

@end
