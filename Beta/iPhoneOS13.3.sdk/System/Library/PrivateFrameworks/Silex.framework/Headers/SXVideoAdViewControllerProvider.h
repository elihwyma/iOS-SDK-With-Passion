/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

@protocol SXVideoAdViewControllerProviding;

@interface SXVideoAdViewControllerProvider : NSObject

{
    id <SXVideoAdViewControllerProviding> _viewControllerProvider;
}

@property (weak, nonatomic, readonly) id <SXVideoAdViewControllerProviding> viewControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController *viewControllerForModalPresentation;

- (id)initWithViewControllerProvider:(id)arg1;

@end
