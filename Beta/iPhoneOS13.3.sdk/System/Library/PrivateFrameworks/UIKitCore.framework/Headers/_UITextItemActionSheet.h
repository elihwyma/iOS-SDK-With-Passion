/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIView, UIWindow, _UIRotatingAlertController;

__attribute__((visibility("hidden")))
@interface _UITextItemActionSheet : NSObject

{
    NSString *_title;
    UIView *_view;
    struct CGRect _rect;
    NSArray *_ddActions;
    _UIRotatingAlertController *_alertController;
    UIWindow *_alertWindow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithTitle:(id)arg1 datadetectorActions:(id)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
- (void)present;
- (_Bool)_hasAlertActions;
- (id)_alertActionsWithController:(id)arg1;
- (id)hostViewForSheet:(id)arg1;
- (struct CGRect)initialPresentationRectInHostViewForSheet:(id)arg1;
- (struct CGRect)presentationRectInHostViewForSheet:(id)arg1;

@end
