/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@interface NUFadeViewAnimator : NSObject

{
    double _fadeOutDuration;
    double _fadeInDuration;
    double _fadeInDelay;
}

@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeInDelay;

- (id)init;
- (void)fadeFromView:(id)arg1 toView:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
