/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <TemplateKit/TLKTextView.h>

@interface SearchUISelectableTextView : TLKTextView

{
    _Bool _allowsDefine;
}

@property (nonatomic) _Bool allowsDefine;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_define:(id)arg1;
- (_Bool)_canDefine;

@end
