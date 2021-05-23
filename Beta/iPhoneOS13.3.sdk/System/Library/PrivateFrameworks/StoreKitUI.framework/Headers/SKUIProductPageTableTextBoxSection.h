/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSString, SKUIClientContext, SKUIColorScheme, SKUILayoutCache;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableTextBoxSection : SKUIProductPageTableSection

{
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    _Bool _isExpanded;
    long long _stringIndex;
    NSString *_subtitle;
    SKUILayoutCache *_textLayoutCache;
    NSString *_title;
}

@property (retain, nonatomic) SKUILayoutCache *textLayoutCache;
@property (nonatomic) long long stringIndex;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;

- (id)initWithClientContext:(id)arg1;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;

@end
