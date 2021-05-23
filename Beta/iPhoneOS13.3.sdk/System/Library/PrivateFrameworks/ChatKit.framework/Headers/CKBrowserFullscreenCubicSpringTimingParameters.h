/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UISpringTimingParameters.h>

@class UICubicTimingParameters;

__attribute__((visibility("hidden")))
@interface CKBrowserFullscreenCubicSpringTimingParameters : UISpringTimingParameters

{
    UICubicTimingParameters *_springCubicTimingParameters;
}

@property (retain, nonatomic) UICubicTimingParameters *springCubicTimingParameters;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cubicTimingParameters;

@end
