/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UIPreviewActionSheetTitleView : UIView

{
    NSString *_title;
    UILabel *_label;
}

@property (retain, nonatomic) NSString *title;
@property (weak, nonatomic) UILabel *label;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_contentSizeChanged:(id)arg1;
- (void)_updateLabelFont;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end
