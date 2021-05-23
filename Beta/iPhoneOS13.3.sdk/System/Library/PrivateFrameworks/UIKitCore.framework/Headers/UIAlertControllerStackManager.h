/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface UIAlertControllerStackManager : NSObject

{
    NSMutableArray *_alertControllerStack;
    NSMutableArray *_hiddenAlertControllers;
    UIScene *_scene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

- (id)initWithScene:(id)arg1;
- (void)_alertControllerWillAppear:(id)arg1;
- (void)_alertControllerDidAppear:(id)arg1;
- (void)_alertControllerWillDisappear:(id)arg1;
- (void)_alertControllerDidDisappear:(id)arg1;
- (_Bool)_alertControllerShouldBeTrackedInStack:(id)arg1;
- (void)_willShowAlertController:(id)arg1;
- (void)_addAlertControllerToStack:(id)arg1;
- (void)_hideStackedAlertControllers;
- (void)_willHideAlertController:(id)arg1;
- (void)_removeAlertControllerFromStack:(id)arg1;
- (void)_didHideAlertController:(id)arg1;
- (id)_topAlertControllerInStack;
- (void)_showHiddenStackedAlertControllers;
- (long long)_alertControllerStackCount;

@end
