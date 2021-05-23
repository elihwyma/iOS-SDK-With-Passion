/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUTextBannerView : UIView

{
    UIImageView *_backgroundView;
    UILabel *_textLabel;
    _Bool _destructiveText;
    NSString *_text;
    long long _textAlignment;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic, getter=isDestructiveText) _Bool destructiveText;
@property (nonatomic) long long textAlignment;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateSubviews;

@end
