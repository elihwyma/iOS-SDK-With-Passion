/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <QuartzCore/CALayer.h>

@interface JTLayer : CALayer

{
    _Bool _debuggingUIEnabled;
}

@property _Bool debuggingUIEnabled;

- (id)initWithDebugEnabled;

@end
