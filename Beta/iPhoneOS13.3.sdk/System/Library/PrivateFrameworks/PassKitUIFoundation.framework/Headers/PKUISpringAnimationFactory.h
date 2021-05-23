/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <PassKitCore/PKSpringAnimationFactory.h>

@class NSString;

@interface PKUISpringAnimationFactory : PKSpringAnimationFactory

{
    CDUnknownBlockType _animationDelayHandler;
    double _maximumVendedDelay;
}

@property (copy, nonatomic) CDUnknownBlockType animationDelayHandler;
@property (nonatomic, readonly) double maximumVendedDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_basicAnimationForView:(struct UIView *)arg1 withKeyPath:(id)arg2;
- (id)springAnimationForView:(struct UIView *)arg1 withKeyPath:(id)arg2;
- (id)_springAnimationForView:(struct UIView *)arg1 withKeyPath:(id)arg2;

@end
