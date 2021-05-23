/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <UIKit/UITextView.h>

@class TLKMultilineText;

@interface TLKTextView : UITextView

{
    _Bool _automaticUrlification;
    unsigned long long _prominence;
    TLKMultilineText *_multilineText;
}

@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (nonatomic) _Bool automaticUrlification;

- (id)init;
- (void)setText:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)updateAttributedString;
- (void)urlify;
- (_Bool)_usesNonVibrantAppearance;

@end
