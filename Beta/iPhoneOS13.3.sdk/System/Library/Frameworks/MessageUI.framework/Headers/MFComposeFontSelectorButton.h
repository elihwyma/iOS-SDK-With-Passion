/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/MFComposeStyleSelectorButton.h>

@class UIFont;

@interface MFComposeFontSelectorButton : MFComposeStyleSelectorButton

{
    UIFont *_representedFont;
}

@property (retain, nonatomic) UIFont *representedFont;

+ (id)buttonWithFont:(id)arg1;

- (void)layoutSubviews;

@end
