/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIView.h>

@class NSString, VSFontCenter;

__attribute__((visibility("hidden")))
@interface VSFooterMessageView : UIView

{
    NSString *_primaryMessage;
    NSString *_secondaryMessage;
    NSString *_tertiaryMessage;
    VSFontCenter *_fontCenter;
}

@property (copy, nonatomic) NSString *primaryMessage;
@property (copy, nonatomic) NSString *secondaryMessage;
@property (copy, nonatomic) NSString *tertiaryMessage;
@property (retain, nonatomic) VSFontCenter *fontCenter;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;

@end
