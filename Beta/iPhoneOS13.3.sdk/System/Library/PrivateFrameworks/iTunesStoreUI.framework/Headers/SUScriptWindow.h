/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SUScriptCanvasFunction, SUScriptFunction, SUScriptViewController, SUScriptWindowContext, WebScriptObject;

@interface SUScriptWindow : SUScriptObject

{
    SUScriptViewController *_backViewController;
    _Bool _canSwipeToDismiss;
    SUScriptWindowContext *_context;
    SUScriptViewController *_frontViewController;
    id _height;
    SUScriptCanvasFunction *_maskFunction;
    id _shadowOpacity;
    id _shadowRadius;
    SUScriptFunction *_shouldDismissFunction;
    id _width;
}

@property (readonly) SUScriptWindowContext *context;
@property (copy) id canSwipeToDismiss;
@property (retain) SUScriptViewController *backViewController;
@property (retain) SUScriptViewController *frontViewController;
@property (retain) NSNumber *height;
@property (retain) WebScriptObject *maskFunction;
@property (retain) NSNumber *shadowOpacity;
@property (retain) NSNumber *shadowRadius;
@property (retain) WebScriptObject *shouldDismissFunction;
@property (readonly) NSString *style;
@property (retain) NSNumber *width;
@property (readonly) SUScriptViewController *windowParentViewController;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)dismissWindowsWithOptions:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)initWithContext:(id)arg1;
- (void)show:(id)arg1;
- (id)attributeKeys;
- (void)dismiss:(id)arg1;
- (id)scriptAttributeKeys;
- (void)_registerForOverlayNotifications;
- (id)_copySafeTransitionOptionsFromOptions:(id)arg1;
- (id)_backgroundViewController:(_Bool)arg1;
- (id)_overlayViewController:(_Bool)arg1;
- (id)_newOverlayTransitionWithOptions:(id)arg1;
- (struct CGSize)_overlaySize;
- (void)_overlayDidDismissNotification:(id)arg1;
- (void)_overlayDidFlipNotification:(id)arg1;
- (void)_overlayDidShowNotification:(id)arg1;
- (void)flip:(id)arg1;

@end
