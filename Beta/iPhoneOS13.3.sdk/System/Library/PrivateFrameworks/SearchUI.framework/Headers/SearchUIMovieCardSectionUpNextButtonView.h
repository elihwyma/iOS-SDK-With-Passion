/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIMovieCardSectionBuyButtonView.h>

@class SearchUIWatchListUtilities;

@interface SearchUIMovieCardSectionUpNextButtonView : SearchUIMovieCardSectionBuyButtonView

{
    SearchUIWatchListUtilities *_watchListUtility;
}

@property (retain, nonatomic) SearchUIWatchListUtilities *watchListUtility;

- (void)buttonPressed;
- (id)initIsInUpNext:(_Bool)arg1 cardSectionView:(id)arg2;
- (void)updateUpNextStatus;

@end
