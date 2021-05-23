/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <UIKit/UITableViewCell.h>

@class REUpNextBaseCell;

@interface TableCell : UITableViewCell

{
    REUpNextBaseCell *_contentCell;
}

@property (retain, nonatomic) REUpNextBaseCell *contentCell;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithContent:(id)arg1;

@end
