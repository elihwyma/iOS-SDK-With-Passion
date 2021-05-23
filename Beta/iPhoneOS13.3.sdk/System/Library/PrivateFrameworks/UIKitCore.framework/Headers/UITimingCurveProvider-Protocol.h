/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UICubicTimingParameters, UISpringTimingParameters;

@protocol UITimingCurveProvider <Swift>

@property (nonatomic, readonly) long long timingCurveType;
@property (nonatomic, readonly) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic, readonly) UISpringTimingParameters *springTimingParameters;

@end
