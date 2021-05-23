/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UILongPressGestureRecognizer.h>

@class NSString, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface SFBarButtonItemLongPressGestureRecognizer : UILongPressGestureRecognizer

{
    UIBarButtonItem *_barButtonItem;
    id _target;
    SEL _longPressAction;
    SEL _touchDownAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)gestureRecognizerTarget:(id)arg1 longPressAction:(SEL)arg2 touchDownAction:(SEL)arg3 attachedToBarButtonItem:(id)arg4;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)longPress:(id)arg1;
- (void)_updateMinimumPressDurationForContentSizeCategory:(id)arg1;
- (void)_invokeLongPressAction;

@end
