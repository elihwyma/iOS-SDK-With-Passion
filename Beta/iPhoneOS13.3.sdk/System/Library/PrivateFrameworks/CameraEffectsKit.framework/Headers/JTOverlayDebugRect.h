/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface JTOverlayDebugRect : NSObject

{
    _Bool _ignoreTransform;
    double _borderWidth;
    UIColor *_borderColor;
    struct CGRect _frame;
}

@property (nonatomic) struct CGRect frame;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) _Bool ignoreTransform;

@end
