/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewCell.h>

@class UISegmentedControl;

__attribute__((visibility("hidden")))
@interface CKConversationListFilterCell : UITableViewCell

{
    UISegmentedControl *_filterControl;
}

@property (retain, nonatomic) UISegmentedControl *filterControl;

+ (id)identifier;
+ (double)defaultHeight;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
