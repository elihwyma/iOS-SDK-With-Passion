/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol ARUICountdownAnimation;

@interface ARUICountdownTimeline : NSObject

{
    id <ARUICountdownAnimation> _prepareToAnimate;
    NSArray *_animations;
    id <ARUICountdownAnimation> _prepareToCancel;
    NSArray *_cancelAnimations;
}

@property (retain, nonatomic) id <ARUICountdownAnimation> prepareToAnimate;
@property (retain, nonatomic) NSArray *animations;
@property (retain, nonatomic) id <ARUICountdownAnimation> prepareToCancel;
@property (retain, nonatomic) NSArray *cancelAnimations;

@end
