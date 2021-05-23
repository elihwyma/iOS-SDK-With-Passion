/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <UIKit/UISpringTimingParameters.h>

@class UICubicTimingParameters;

@interface _TVRUICubicSpringTimingParameters : UISpringTimingParameters

{
    UICubicTimingParameters *_springCubicTimingParameters;
}

@property (copy, nonatomic) UICubicTimingParameters *springCubicTimingParameters;

+ (id)standardTimingParameters;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cubicTimingParameters;

@end
