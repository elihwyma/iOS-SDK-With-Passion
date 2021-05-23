/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NSString, SFImage, SFPunchout, SFWatchListCardSection, SearchUIWatchListCardsManager;

@protocol SearchUIWatchListCardRowModelDelegate;

@interface SearchUIWatchListCardRowModel

{
    _Bool _hasLoaded;
    _Bool _hasError;
    id <SearchUIWatchListCardRowModelDelegate> _delegate;
    NSString *_text;
    SFImage *_image;
    long long _buttonState;
    SFPunchout *_punchout;
    SearchUIWatchListCardsManager *_manager;
}

@property (retain, nonatomic) SearchUIWatchListCardsManager *manager;
@property (nonatomic) _Bool hasLoaded;
@property (retain, nonatomic) SFPunchout *punchout;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) SFImage *image;
@property (nonatomic) long long buttonState;
@property (weak) id <SearchUIWatchListCardRowModelDelegate> delegate;
@property (retain, nonatomic) SFWatchListCardSection *cardSection;
@property (nonatomic) _Bool hasError;

- (int)separatorStyle;
- (_Bool)isDraggable;
- (id)punchouts;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 asyncRowManager:(id)arg3 queryId:(unsigned long long)arg4;
- (_Bool)isTappable;
- (void)updateWithText:(id)arg1 buttonState:(long long)arg2 image:(id)arg3 punchout:(id)arg4;
- (void)updateWithText:(id)arg1 buttonState:(long long)arg2;
- (void)toggleAddToUpNextWithFeedbackDelegate:(id)arg1;

@end
