/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CABackdropLayer, NSString;

__attribute__((visibility("hidden")))
@interface _UIBackdropEffectView : UIView

{
    CABackdropLayer *_backdropLayer;
    double _zoom;
}

@property (retain, nonatomic) CABackdropLayer *backdropLayer;
@property (nonatomic) double zoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)layerClass;

- (id)init;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;

@end
