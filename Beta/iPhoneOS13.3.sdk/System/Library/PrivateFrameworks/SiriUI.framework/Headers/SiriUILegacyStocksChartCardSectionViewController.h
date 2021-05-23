/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <CRKCardSectionViewController.h>

@class SiriUICardSectionView, SiriUISnippetViewController;

@interface SiriUILegacyStocksChartCardSectionViewController : CRKCardSectionViewController

{
    SiriUISnippetViewController *_snippetViewController;
}

@property (retain, nonatomic) SiriUICardSectionView *view;

+ (id)cardSectionClasses;

- (void)viewDidLayoutSubviews;
- (void)_updateContentSize;
- (void)_loadCardSectionView;
- (_Bool)_shouldRenderButtonOverlay;

@end
