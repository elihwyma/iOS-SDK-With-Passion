/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/_SBCameraLaunchCondition.h>

@class NSArray;

@interface _SBAggregateCameraLaunchCondition : _SBCameraLaunchCondition

{
    NSArray *_conditions;
}

@property (retain, nonatomic) NSArray *conditions;

- (_Bool)isMet;

@end
