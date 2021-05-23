/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, VUILabel, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUIDownloadShowTableHeaderView : UITableViewHeaderFooterView

{
    NSString *_headerTitle;
    VUILabel *_titleLabel;
    VUISeparatorView *_separatorView;
}

@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) NSString *headerTitle;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;

@end
