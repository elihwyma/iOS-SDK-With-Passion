/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUITableViewController.h>

@class SFCard;

@protocol SearchUICardViewDelegate;

@interface SearchUICardTableViewController : SearchUITableViewController

{
    id <SearchUICardViewDelegate> _cardViewDelegate;
    SFCard *_card;
}

@property (weak, nonatomic) id <SearchUICardViewDelegate> cardViewDelegate;
@property (retain, nonatomic) SFCard *card;

- (id)init;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (void)setTableModel:(id)arg1;
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(_Bool)arg2;
- (void)setShouldUseInsetRoundedSections:(_Bool)arg1;
- (void)showViewController:(id)arg1;
- (_Bool)shouldDrawTopAndBottomSeparators;
- (double)offScreenContentScrollDistance;

@end
