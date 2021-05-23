/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class UIWindow;

@interface TVStorePlaybackLaunchShroud : NSObject

{
    _Bool _hidden;
    UIWindow *_window;
}

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic, getter=isHidden) _Bool hidden;

+ (id)sharedShroud;

- (id)init;
- (void)fadeOut;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_hideWithFadeAnimation:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_showWithFadeAnimation:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
