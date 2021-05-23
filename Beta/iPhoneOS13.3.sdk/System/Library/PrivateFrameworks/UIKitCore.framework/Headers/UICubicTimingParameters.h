/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UISpringTimingParameters, _UIViewCubicTimingFunction;

@interface UICubicTimingParameters : NSObject

{
    long long _timingCurveType;
    _UIViewCubicTimingFunction *_timingFunction;
    long long _animationCurve;
    UISpringTimingParameters *_springTimingParameters;
}

@property (nonatomic, readonly) _UIViewCubicTimingFunction *timingFunction;
@property (retain, nonatomic) UISpringTimingParameters *springTimingParameters;
@property (nonatomic, readonly) long long animationCurve;
@property (nonatomic, readonly) struct CGPoint controlPoint1;
@property (nonatomic, readonly) struct CGPoint controlPoint2;
@property (nonatomic, readonly) long long timingCurveType;
@property (nonatomic, readonly) UICubicTimingParameters *cubicTimingParameters;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomCurve:(id)arg1;
- (id)initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
- (id)_mediaTimingFunction;
- (id)effectiveTimingFunction;
- (id)initWithAnimationCurve:(long long)arg1;
- (void)_setAnimationCurve:(long long)arg1;

@end
