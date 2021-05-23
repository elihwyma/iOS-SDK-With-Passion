/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SBViewControllerContextTransitioning;

@interface SBPercentPassthroughInteractiveTransition : NSObject

{
    id <SBViewControllerContextTransitioning> _transitionContext;
    double _completionSpeed;
    long long _completionCurve;
}

@property (nonatomic) double completionSpeed;
@property (nonatomic) long long completionCurve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;

- (id)init;
- (void)startInteractiveTransition:(id)arg1;
- (void)finishInteractiveTransition;
- (void)cancelTransition;
- (_Bool)supportsRestarting;
- (void)updateTransition:(double)arg1;

@end
