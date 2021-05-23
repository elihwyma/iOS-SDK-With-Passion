/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPercentDrivenInteractiveTransition.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIAlertController;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerInteractionController : UIPercentDrivenInteractiveTransition <Swift>

{
    UIAlertController *_alertController;
    id <UIViewControllerContextTransitioning> _context;
}

@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) id <UIViewControllerContextTransitioning> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;

- (void)startInteractiveTransition:(id)arg1;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;

@end
