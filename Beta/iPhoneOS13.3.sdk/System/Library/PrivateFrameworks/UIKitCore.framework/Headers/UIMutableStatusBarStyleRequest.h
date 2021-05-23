/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarStyleRequest.h>

@class NSNumber, UIColor;

__attribute__((visibility("hidden")))
@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest

@property (nonatomic) long long style;
@property (nonatomic) long long legibilityStyle;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) double foregroundAlpha;
@property (retain, nonatomic) NSNumber *overrideHeight;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
