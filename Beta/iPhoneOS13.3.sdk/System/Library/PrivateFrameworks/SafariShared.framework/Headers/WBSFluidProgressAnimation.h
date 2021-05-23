/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction;

@interface WBSFluidProgressAnimation : NSObject

{
    CAMediaTimingFunction *_timingFunction;
    double _initialPosition;
    double _destinationPosition;
    double _animationDuration;
}

@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) double initialPosition;
@property (nonatomic) double destinationPosition;
@property (nonatomic) double animationDuration;

@end
