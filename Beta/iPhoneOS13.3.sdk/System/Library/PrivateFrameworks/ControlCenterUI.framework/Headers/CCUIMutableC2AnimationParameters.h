/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <ControlCenterUI/CCUIC2AnimationParameters.h>

@interface CCUIMutableC2AnimationParameters : CCUIC2AnimationParameters

@property (nonatomic, getter=isInteractive) _Bool interactive;
@property (nonatomic) double tension;
@property (nonatomic) double friction;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
