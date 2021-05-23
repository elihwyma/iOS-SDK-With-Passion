/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, WLKBasicEpisodeMetadata;

@interface WLKCanonicalContainerResponse : NSObject

{
    _Bool _watchListable;
    _Bool _watchListed;
    NSDictionary *_dictionary;
    NSString *_canonicalID;
    unsigned long long _contentType;
    WLKBasicEpisodeMetadata *_currentEpisode;
    NSDictionary *_defaultSeason;
    NSArray *_channels;
}

@property (copy, nonatomic, readonly) NSDictionary *dictionary;
@property (copy, nonatomic, readonly) NSString *canonicalID;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly, getter=isWatchListable) _Bool watchListable;
@property (nonatomic, readonly, getter=isWatchListed) _Bool watchListed;
@property (copy, nonatomic, readonly) WLKBasicEpisodeMetadata *currentEpisode;
@property (copy, nonatomic, readonly) NSDictionary *defaultSeason;
@property (copy, nonatomic, readonly) NSArray *channels;

- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
