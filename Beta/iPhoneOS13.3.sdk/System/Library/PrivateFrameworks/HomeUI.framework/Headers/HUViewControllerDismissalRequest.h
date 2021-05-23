/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@interface HUViewControllerDismissalRequest : NSObject

{
    _Bool _animated;
    UIViewController *_viewController;
}

@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic) _Bool animated;

+ (id)requestWithViewController:(id)arg1;

- (id)initWithViewController:(id)arg1;

@end
