/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXEventStoreProvider;

@protocol SXViewControllerPresenting;

@interface SXCalendarPresenter : NSObject

{
    id <SXViewControllerPresenting> _viewControllerPresenting;
    SXEventStoreProvider *_eventStoreProvider;
}

@property (nonatomic, readonly) id <SXViewControllerPresenting> viewControllerPresenting;
@property (nonatomic, readonly) SXEventStoreProvider *eventStoreProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)presentCalendarEvent:(id)arg1;
- (id)initWithViewControllerPresenting:(id)arg1 eventStoreProvider:(id)arg2;

@end
