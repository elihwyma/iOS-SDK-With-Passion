/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUTableCell.h>

@class SUWebDocumentView;

@interface SUMarkupCell : SUTableCell

{
    SUWebDocumentView *_webView;
}

- (void)dealloc;
- (void)setConfiguration:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;

@end
