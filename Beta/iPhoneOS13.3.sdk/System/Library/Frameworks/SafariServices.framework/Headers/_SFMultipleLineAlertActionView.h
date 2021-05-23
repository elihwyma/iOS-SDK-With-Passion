/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface _SFMultipleLineAlertActionView : UIView

{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *detailLabel;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;

@end
