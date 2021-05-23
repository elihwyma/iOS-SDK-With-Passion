/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface CEKLightingControlItem : NSObject

{
    long long _lightingType;
    NSString *_displayName;
    UIImage *_displayImage;
    UIImage *_displayShadowImage;
    UIImage *_displayOutlineImage;
    UIImage *_selectionBackgroundImage;
}

@property (nonatomic, readonly) long long lightingType;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) UIImage *displayImage;
@property (nonatomic, readonly) UIImage *displayShadowImage;
@property (nonatomic, readonly) UIImage *displayOutlineImage;
@property (nonatomic, readonly) UIImage *selectionBackgroundImage;

+ (id)_defaultOutlineImage;

- (id)initWithType:(long long)arg1;

@end
