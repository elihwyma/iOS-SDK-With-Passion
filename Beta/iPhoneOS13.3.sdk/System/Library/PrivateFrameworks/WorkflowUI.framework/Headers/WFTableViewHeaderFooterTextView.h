/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, UILabel;

@interface WFTableViewHeaderFooterTextView : UITableViewHeaderFooterView

{
    UILabel *_label;
}

@property (nonatomic, readonly) UILabel *label;
@property (copy, nonatomic) NSString *text;

- (id)init;
- (id)initWithReuseIdentifier:(id)arg1;

@end
