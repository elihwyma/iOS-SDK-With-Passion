/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXViewControllerPresenting;

@interface SXCloseActionActivityProvider : NSObject

{
    id <SXViewControllerPresenting> _viewControllerPresenting;
}

@property (nonatomic, readonly) id <SXViewControllerPresenting> viewControllerPresenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityGroupForAction:(id)arg1;
- (id)initWithViewControllerPresenting:(id)arg1;

@end
