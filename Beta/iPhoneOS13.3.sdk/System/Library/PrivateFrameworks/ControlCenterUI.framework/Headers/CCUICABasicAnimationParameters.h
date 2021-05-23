/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUICABasicAnimationParameters : NSObject

{
    double _duration;
    id <CCUIAnimationTimingFunctionDescription> _timingFunction;
}

@property (nonatomic, readonly) double duration;
@property (copy, nonatomic, readonly) id <CCUIAnimationTimingFunctionDescription> timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAnimationParameters:(id)arg1;

@end
