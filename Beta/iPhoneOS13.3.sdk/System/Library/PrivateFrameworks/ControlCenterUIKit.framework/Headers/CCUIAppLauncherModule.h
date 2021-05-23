/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <Foundation/NSObject.h>

@class CCUIContentModuleContext, NSBundle, NSString, NSURL, UIImage, UIViewController;

@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface CCUIAppLauncherModule : NSObject

{
    NSBundle *_bundle;
    _Bool _supportsApplicationShortcuts;
    NSString *_applicationIdentifier;
    NSString *_displayName;
    CCUIContentModuleContext *_contentModuleContext;
    NSURL *_launchURL;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSURL *launchURL;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) _Bool supportsApplicationShortcuts;
@property (copy, nonatomic, readonly) UIImage *iconGlyph;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (nonatomic, readonly) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;

- (id)init;
- (id)contentViewControllerForContext:(id)arg1;
- (id)launchURLForTouchType:(long long)arg1;
- (void)handleTouchDownWithTouchType:(long long)arg1;
- (void)handleTapWithTouchType:(long long)arg1;

@end
