/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIPrintingMessageView : UIView

{
    UILabel *_title;
    UILabel *_message;
}

- (void)setMessage:(id)arg1;
- (id)initInView:(id)arg1 title:(id)arg2;

@end
