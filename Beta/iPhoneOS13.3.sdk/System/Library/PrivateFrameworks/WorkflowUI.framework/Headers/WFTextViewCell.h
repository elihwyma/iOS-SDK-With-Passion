/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class WFPlaceholderTextView;

@interface WFTextViewCell : UITableViewCell

{
    WFPlaceholderTextView *_textView;
}

@property (retain, nonatomic) WFPlaceholderTextView *textView;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
