/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray, SUTextViewCell;

@interface SUConcernListDataSource : SUTableDataSource

{
    NSArray *_concerns;
    long long _selectedConcernIndex;
    SUTextViewCell *_textViewCell;
}

@property (retain, nonatomic) NSArray *concerns;
@property (nonatomic) long long selectedConcernIndex;
@property (nonatomic, readonly) SUTextViewCell *textViewCell;

- (id)init;
- (void)dealloc;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)tableViewStyle;
- (id)cellForIndexPath:(id)arg1;
- (double)cellHeightForIndexPath:(id)arg1;
- (id)_titleCellForIndexPath:(id)arg1;

@end
