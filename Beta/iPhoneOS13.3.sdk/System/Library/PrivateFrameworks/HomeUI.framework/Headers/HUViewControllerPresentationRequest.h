/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@interface HUViewControllerPresentationRequest : NSObject

{
    _Bool _animated;
    UIViewController *_viewController;
    unsigned long long _preferredPresentationType;
}

@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic) unsigned long long preferredPresentationType;
@property (nonatomic) _Bool animated;

+ (id)requestWithViewController:(id)arg1;

- (id)initWithViewController:(id)arg1;

@end
