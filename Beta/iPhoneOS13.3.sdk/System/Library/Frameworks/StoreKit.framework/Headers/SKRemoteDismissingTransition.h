/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

@protocol SKRemoteDismissingViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteDismissingTransition : NSObject

{
    UIViewController<SKRemoteDismissingViewController> *_viewController;
}

@property (retain, nonatomic) UIViewController<SKRemoteDismissingViewController> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (void)dismissRemoteViewController:(id)arg1;

@end
