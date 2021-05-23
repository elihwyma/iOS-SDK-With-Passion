/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UIViewController.h>

@class NSTimer, NUIContainerBoxView, SFCard, SearchUIBackgroundView, SearchUICardTableViewController, TLKLabel, UIActivityIndicatorView;

@protocol SFFeedbackListener, SearchUICardViewDelegate;

@interface SearchUICardViewController : UIViewController

{
    NUIContainerBoxView *_loadingView;
    UIActivityIndicatorView *_loadingSpinner;
    TLKLabel *_loadingLabel;
    NSTimer *_loadingScreenTimer;
    unsigned long long _level;
    SearchUICardTableViewController *_tableViewController;
}

@property (retain, nonatomic) SearchUIBackgroundView *view;
@property (retain, nonatomic) NUIContainerBoxView *loadingView;
@property (retain, nonatomic) UIActivityIndicatorView *loadingSpinner;
@property (retain, nonatomic) TLKLabel *loadingLabel;
@property (retain, nonatomic) NSTimer *loadingScreenTimer;
@property (nonatomic) unsigned long long level;
@property (retain, nonatomic) SearchUICardTableViewController *tableViewController;
@property (nonatomic) _Bool shouldUseInsetRoundedSections;
@property (nonatomic, getter=isInPreviewPlatter) _Bool inPreviewPlatter;
@property (retain, nonatomic) SFCard *card;
@property (weak, nonatomic) id <SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id <SearchUICardViewDelegate> delegate;
@property (nonatomic) _Bool threeDTouchEnabled;

- (id)init;
- (_Bool)_canShowWhileLocked;
- (id)initWithCard:(id)arg1 feedbackListener:(id)arg2;
- (void)prepareLoadingView;
- (void)displayLoadingViewAfterDelay:(double)arg1 withSpinner:(_Bool)arg2;
- (void)updateTimerAndCardSections:(id)arg1;
- (void)updateWithCardSections:(id)arg1;
- (void)cardViewDidAppear;
- (id)initWithCard:(id)arg1 style:(unsigned long long)arg2 feedbackListener:(id)arg3;
- (double)contentHeightForWidth:(double)arg1;
- (id)testingTableViewController;

@end
