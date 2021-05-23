/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSURLRequest, UIViewController;

@protocol SWNavigationHandler;

@interface SWNavigationPreview : NSObject

{
    UIViewController *_viewController;
    id <SWNavigationHandler> _navigationHandler;
    NSURLRequest *_request;
}

@property (weak, nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) id <SWNavigationHandler> navigationHandler;
@property (nonatomic, readonly) NSURLRequest *request;

- (id)initWithViewController:(id)arg1 navigationHandler:(id)arg2 URLRequest:(id)arg3;

@end
