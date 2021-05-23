/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIControl.h>

@class UILabel;

@interface SULinkControl : UIControl

{
    UILabel *_label;
    _Bool _shouldDrawUnderline;
    unsigned int _sizeIsDirty:1;
    long long _style;
}

@property (nonatomic) _Bool shouldDrawUnderline;

- (void)dealloc;
- (void)setStyle:(long long)arg1;
- (void)setText:(id)arg1;
- (id)_label;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setHighlighted:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_updateLabel;

@end
