/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewPropertyAnimator;

@interface SVVideoAccessoryItemCrossfadeTransitionCoordinator : NSObject

{
    UIViewPropertyAnimator *_fadeInAnimator;
    UIViewPropertyAnimator *_fadeOutAnimator;
}

@property (retain, nonatomic) UIViewPropertyAnimator *fadeInAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *fadeOutAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool animated;

- (void)cancelTransition;
- (void)animateWithContext:(id)arg1;

@end
