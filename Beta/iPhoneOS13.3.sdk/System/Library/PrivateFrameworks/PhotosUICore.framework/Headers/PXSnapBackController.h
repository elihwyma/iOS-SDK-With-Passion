/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, UILongPressGestureRecognizer, UINavigationController;

@interface PXSnapBackController : NSObject

{
    _Bool _enabled;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UINavigationController *_navigationController;
}

@property (weak, nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)_backButtonView;
- (id)initWithNavigationController:(id)arg1;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_loadGestureRecognizer;
- (void)_unloadGestureRecognizer;
- (void)_presentHistory;
- (void)_enumerateDestinationViewControllersUsingBlock:(CDUnknownBlockType)arg1;

@end
