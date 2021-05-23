/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, WLKBasicContentMetadata, WLKComingSoonInfo;

@interface WLKBrowseItem : NSObject

{
    _Bool _watchlisted;
    _Bool _watchlistable;
    WLKBasicContentMetadata *_content;
    WLKBrowseItem *_currentEpisode;
    NSArray *_playables;
    WLKComingSoonInfo *_contentComingSoonInfo;
}

@property (retain, nonatomic) WLKComingSoonInfo *contentComingSoonInfo;
@property (nonatomic, readonly) WLKBasicContentMetadata *content;
@property (nonatomic, readonly) WLKBrowseItem *currentEpisode;
@property (nonatomic, readonly) NSArray *playables;
@property (nonatomic, readonly, getter=isWatchlisted) _Bool watchlisted;
@property (nonatomic, readonly, getter=isWatchlistable) _Bool watchlistable;

+ (id)browseItemsWithDictionaries:(id)arg1 context:(id)arg2;

- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (id)preferredComingSoonInfo;

@end
