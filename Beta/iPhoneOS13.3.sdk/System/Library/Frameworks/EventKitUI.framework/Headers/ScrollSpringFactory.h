/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/SpringFactory.h>

@interface ScrollSpringFactory : SpringFactory

{
    double _initialVelocity;
}

@property (nonatomic) double initialVelocity;

+ (id)sharedFactory;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;

@end
