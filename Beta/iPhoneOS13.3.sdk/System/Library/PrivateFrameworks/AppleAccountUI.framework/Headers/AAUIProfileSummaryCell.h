/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UITableViewCell.h>

@class AAUIProfileSummaryView;

@interface AAUIProfileSummaryCell : UITableViewCell

{
    AAUIProfileSummaryView *_contentView;
}

+ (double)desiredHeight;

- (void)layoutSubviews;
- (id)initWithName:(id)arg1 email:(id)arg2 image:(id)arg3;

@end
