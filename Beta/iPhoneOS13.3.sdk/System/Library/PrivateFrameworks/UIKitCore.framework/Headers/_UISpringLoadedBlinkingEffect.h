/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface _UISpringLoadedBlinkingEffect : NSObject

{
    CALayer *_blinkLayer;
}

@property (retain, nonatomic) CALayer *blinkLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)_prepareLayer:(id)arg1 forView:(id)arg2;
- (id)blinkAnimation;

@end
