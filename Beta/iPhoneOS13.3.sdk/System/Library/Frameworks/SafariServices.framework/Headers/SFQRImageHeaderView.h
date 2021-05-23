/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class UIImageView;

@protocol BCSAction;

__attribute__((visibility("hidden")))
@interface SFQRImageHeaderView : UIView

{
    UIImageView *_iconView;
    id <BCSAction> _action;
}

@property (weak, nonatomic) id <BCSAction> action;

- (id)_title;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_actionTypeString;

@end
