/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CALayer, UIColor;

@interface _NTKColorManager : NSObject

{
    CALayer *_layer;
    UIColor *_color;
}

@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic, readonly) UIColor *contentColor;

- (_Bool)shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateFilterColor;

@end
