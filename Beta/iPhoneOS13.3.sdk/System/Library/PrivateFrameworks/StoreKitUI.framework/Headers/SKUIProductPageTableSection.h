/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUITableViewSection.h>

@class SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableSection : SKUITableViewSection

{
    SKUIClientContext *_clientContext;
    _Bool _expanded;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic, getter=isExpanded) _Bool expanded;

- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (double)heightForTextLayout:(id)arg1 isExpanded:(_Bool)arg2;
- (id)textBoxTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

@end
