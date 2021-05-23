/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIView.h>

@interface JTView : UIView

{
    _Bool _debuggingUIEnabled;
}

@property _Bool debuggingUIEnabled;

+ (Class)layerClass;

- (void)layoutSubviews;
- (void)enableDebugMode:(id)arg1;

@end
