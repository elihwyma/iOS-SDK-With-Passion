/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentCell : UITableViewCell

{
    UIActivityIndicatorView *_activityIndicator;
}

- (void)setAttachment:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_iconForDocumentProxy:(id)arg1;
- (void)showSpinner:(_Bool)arg1;

@end
