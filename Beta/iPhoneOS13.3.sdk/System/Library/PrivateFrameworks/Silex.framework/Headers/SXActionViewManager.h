/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXViewControllerPresenting;

@interface SXActionViewManager : NSObject

{
    id <SXViewControllerPresenting> _viewControllerPresenter;
}

@property (nonatomic, readonly) id <SXViewControllerPresenting> viewControllerPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)presentActivityGroup:(id)arg1 action:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithViewControllerPresenting:(id)arg1;

@end
