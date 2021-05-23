/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString;

@interface NUVideoPlaybackCounter : NSObject <Swift>

{
    unsigned long long numberOfVideosPlayedSinceLastAd;
    unsigned long long numberOfVideosPlayedInSession;
}

@property (nonatomic) unsigned long long numberOfVideosPlayedInSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long numberOfVideosPlayedSinceLastAd;

- (id)adContextValueForKeyPath:(id)arg1;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedForVideoAdWithMetadata:(id)arg1;
- (void)resetNumberOfVideosPlayedSinceLastAd;
- (void)incrementNumberOfVideosPlayedSinceLastAd;
- (void)incrementNumberOfVideosPlayedInSession;
- (void)setNumberOfVideosPlayedSinceLastAd:(unsigned long long)arg1;

@end
