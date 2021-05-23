/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSSet, SBActivationSettings;

@interface SBIconLaunchContext : NSObject

{
    SBActivationSettings *_activationSettings;
    NSSet *_actions;
}

@property (retain, nonatomic) SBActivationSettings *activationSettings;
@property (copy, nonatomic) NSSet *actions;

@end
