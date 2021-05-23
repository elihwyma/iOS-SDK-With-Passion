/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/Swift-Protocol.h>

@class UIViewController;

@protocol IMAAppPresenterDelegate <Swift>

@property (nonatomic, readonly) UIViewController *dockPresentationViewController;
@property (nonatomic, readonly) _Bool expandedAppShouldDismissOnDragSuccess;
@property (nonatomic, readonly) struct CGSize expandedAppViewControllerSize;

@end
