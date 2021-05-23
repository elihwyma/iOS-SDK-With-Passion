/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString;

@protocol NUVideoEventTracker, NUVideoItem, SVVideoMetadata;

@interface NUVideoProvider : NSObject <Swift>

{
    NSString *_identifier;
    id <NUVideoItem> _videoItem;
    id <SVVideoMetadata> _metadata;
    id <NUVideoEventTracker> _eventTracker;
}

@property (retain, nonatomic) id <SVVideoMetadata> metadata;
@property (retain, nonatomic) id <NUVideoEventTracker> eventTracker;
@property (nonatomic, readonly, getter=areNeighboringAdsAllowed) _Bool neighboringAdsAreAllowed;
@property (copy, nonatomic, readonly) id <NUVideoItem> videoItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long videoType;
@property (nonatomic, readonly) _Bool allowsCallToActionBar;

- (CDUnknownBlockType)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)didAppear;
- (void)playbackStarted;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackFinished;
- (void)didDisappear;
- (void)playbackFailedWithError:(id)arg1;
- (void)muteStateChanged:(_Bool)arg1;
- (void)tappedNowPlaying;
- (void)tappedAdvance;
- (void)tappedDiscoverMore;
- (void)playbackInitiated;
- (void)tappedCallToAction;
- (id)videoMetadataForCurrentState;
- (id)initWithVideoItem:(id)arg1 eventTracker:(id)arg2;
- (void)tappedReplay;

@end
