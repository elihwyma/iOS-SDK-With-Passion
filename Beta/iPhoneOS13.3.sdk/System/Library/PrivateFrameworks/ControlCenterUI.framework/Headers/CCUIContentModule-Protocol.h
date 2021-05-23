/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <ControlCenterUI/Swift-Protocol.h>

@class UIViewController;

@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@protocol CCUIContentModule <Swift>

@property (nonatomic, readonly) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (nonatomic, readonly) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;

@end
