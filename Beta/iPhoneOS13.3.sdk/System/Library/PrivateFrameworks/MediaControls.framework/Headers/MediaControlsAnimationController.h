/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsAnimationController : NSObject

{
    _Bool _presenting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initForPresenting:(_Bool)arg1;

@end
