/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <AppSupportUI/NUIContainerBoxView.h>

@class SearchUIMovieCardSectionView;

@interface SearchUIButtonsView : NUIContainerBoxView

{
    SearchUIMovieCardSectionView *_cardSectionView;
}

@property (weak) SearchUIMovieCardSectionView *cardSectionView;

- (id)initWithCardSectionView:(id)arg1;
- (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 punchoutURL:(id)arg3;
- (void)fetchButtonsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendErrorFeedbackIfNecessary:(id)arg1;
- (id)buttonsForPlayables:(id)arg1 channels:(id)arg2 currentEpisode:(id)arg3 isUpNextable:(_Bool)arg4 isUpNexted:(_Bool)arg5;
- (_Bool)channelHasBeenSeen:(id)arg1 seenChannels:(id)arg2;
- (id)buttonForChannelOffer:(id)arg1 channel:(id)arg2 episode:(id)arg3;
- (id)buttonForChannelDetails:(id)arg1 punchoutURLs:(id)arg2 isEntitled:(_Bool)arg3 isContinuing:(_Bool)arg4 isContainerItem:(_Bool)arg5 seasonNumber:(id)arg6 episodeNumber:(id)arg7;
- (id)buttonForOffer:(id)arg1 playable:(id)arg2;
- (id)buttonForPlayable:(id)arg1;

@end
