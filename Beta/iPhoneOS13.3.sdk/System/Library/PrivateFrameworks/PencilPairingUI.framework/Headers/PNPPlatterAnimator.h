/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PNPPlatterAnimator : NSObject

{
    _Bool _isPresenting;
}

@property (nonatomic) _Bool isPresenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;

@end
