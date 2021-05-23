/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXActionManager, SXSubscribeActionHandler, SXViewControllerPresenting;

@interface SXSubscribeActionActivityProvider : NSObject

{
    id <SXSubscribeActionHandler> _handler;
    id <SXViewControllerPresenting> _viewControllerPresenting;
    id <SXActionManager> _actionManager;
}

@property (nonatomic, readonly) id <SXSubscribeActionHandler> handler;
@property (nonatomic, readonly) id <SXViewControllerPresenting> viewControllerPresenting;
@property (weak, nonatomic, readonly) id <SXActionManager> actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityGroupForAction:(id)arg1;
- (id)initWithHandler:(id)arg1 viewControllerPresenting:(id)arg2 actionManager:(id)arg3;

@end
