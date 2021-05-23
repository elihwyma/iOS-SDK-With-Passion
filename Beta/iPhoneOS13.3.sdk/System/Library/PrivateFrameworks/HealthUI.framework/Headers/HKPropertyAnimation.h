/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction, NSDate, NSString;

@interface HKPropertyAnimation : NSObject

{
    NSString *_property;
    id _fromValue;
    id _toValue;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    long long _secondaryAnimationCurve;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _propertyApplicationFunction;
    NSDate *_appliedDate;
}

@property (retain, nonatomic) NSDate *appliedDate;
@property (retain, nonatomic) NSString *property;
@property (retain, nonatomic) id fromValue;
@property (retain, nonatomic) id toValue;
@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) long long secondaryAnimationCurve;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (copy, nonatomic) CDUnknownBlockType propertyApplicationFunction;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_validate;
- (void)_finish;
- (void)_applyWithCurrentDate:(id)arg1;
- (_Bool)_isCompleted;

@end
