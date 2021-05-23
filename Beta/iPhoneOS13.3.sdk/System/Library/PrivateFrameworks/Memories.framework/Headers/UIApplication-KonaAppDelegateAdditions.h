/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIApplication.h>

@class UIViewController;

@interface UIApplication (KonaAppDelegateAdditions)

@property (nonatomic, readonly) UIViewController *topmostViewController;

+ (id)localizedString:(id)arg1;
+ (id)konaDelegate;

- (_Bool)isAlertControllerPresenting;

@end
