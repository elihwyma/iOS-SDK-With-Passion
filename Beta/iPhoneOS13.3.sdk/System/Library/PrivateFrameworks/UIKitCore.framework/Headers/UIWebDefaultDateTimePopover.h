/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWebFormRotatingAccessoryPopover.h>

@class UIWebDateTimePopoverViewController;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover

{
    UIWebDateTimePopoverViewController *_webDateTimeViewController;
}

@property (retain, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController;

- (void)dealloc;
- (void)clear:(id)arg1;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;

@end
