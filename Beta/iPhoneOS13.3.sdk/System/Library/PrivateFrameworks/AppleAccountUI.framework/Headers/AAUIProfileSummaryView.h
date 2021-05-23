/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AAUIProfileSummaryView : UIView

{
    UIImageView *_profileImageView;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
    _Bool _hidesPhoto;
    double _topPadding;
}

@property (nonatomic) _Bool hidesPhoto;
@property (nonatomic) double topPadding;

+ (double)desiredHeight;

- (void)layoutSubviews;
- (id)initWithName:(id)arg1 email:(id)arg2 image:(id)arg3;

@end
