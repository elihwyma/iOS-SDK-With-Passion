/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSTableCell.h>

@class NSString, UILongPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface STRotatingDisclosureCell : PSTableCell

{
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (readonly) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSpecifier:(id)arg1;
- (void)_userPressed:(id)arg1;

@end
