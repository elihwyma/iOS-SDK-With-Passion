/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UIPreviewPlatterActionsTitleView : UIView

{
    NSString *_title;
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)traitCollectionDidChange:(id)arg1;
- (id)_titleFont;
- (id)initWithTitle:(id)arg1;

@end
