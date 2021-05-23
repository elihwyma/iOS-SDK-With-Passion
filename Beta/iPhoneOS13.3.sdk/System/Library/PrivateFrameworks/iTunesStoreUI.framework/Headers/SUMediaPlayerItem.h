/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface SUMediaPlayerItem : NSObject

{
    NSURL *_backgroundImageURL;
    NSString *_bookmarkIdentifier;
    NSArray *_downloadPingURLs;
    long long _initialOrientation;
    unsigned long long _itemIdentifier;
    long long _itemType;
    NSArray *_playbackPingURLs;
    double _playableDuration;
    NSString *_subtitle;
    NSString *_title;
    NSURL *_url;
}

@property (retain, nonatomic) NSURL *backgroundImageURL;
@property (nonatomic) double bookmarkedStartTime;
@property (copy, nonatomic) NSString *bookmarkIdentifier;
@property (nonatomic) long long initialOrientation;
@property (nonatomic) unsigned long long itemIdentifier;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSArray *downloadPingURLs;
@property (copy, nonatomic) NSArray *playbackPingURLs;
@property (nonatomic) double playableDuration;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *URL;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItem:(id)arg1;
- (id)_newPingURLsWithArray:(id)arg1;
- (void)resetBookmarkedStartTime;

@end
