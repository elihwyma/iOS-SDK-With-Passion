/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIApplication.h>

@protocol VUIApplicationDelegate;

@interface UIApplication (VideosUI)

@property (nonatomic, readonly) id <VUIApplicationDelegate> vui_delegate;

@end
