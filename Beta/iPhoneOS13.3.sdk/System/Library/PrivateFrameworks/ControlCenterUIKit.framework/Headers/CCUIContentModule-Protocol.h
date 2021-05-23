/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <ControlCenterUIKit/Swift-Protocol.h>

@class UIViewController;

@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@protocol CCUIContentModule <Swift>

@property (nonatomic, readonly) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (nonatomic, readonly) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;

@end
