/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@interface MPAVRoutingTableViewHeaderView : UITableViewHeaderFooterView

{
    struct UIEdgeInsets _titleInsets;
}

@property (nonatomic) struct UIEdgeInsets titleInsets;

- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_updateFont;

@end
