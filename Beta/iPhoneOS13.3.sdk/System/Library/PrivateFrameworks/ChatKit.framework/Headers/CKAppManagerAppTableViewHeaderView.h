/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKAppManagerAppTableViewHeaderView : UITableViewHeaderFooterView

{
    UILabel *_headerLabel;
}

@property (retain, nonatomic) UILabel *headerLabel;

+ (id)identifier;

- (void)layoutSubviews;
- (void)layoutMarginsDidChange;
- (id)initWithReuseIdentifier:(id)arg1;

@end
