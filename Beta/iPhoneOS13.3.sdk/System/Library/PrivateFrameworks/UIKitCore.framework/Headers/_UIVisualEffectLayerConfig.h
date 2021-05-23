/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface _UIVisualEffectLayerConfig : NSObject

{
    NSString *_filterType;
    double _opacity;
    UIColor *_fillColor;
}

@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) NSString *filterType;
@property (nonatomic, readonly) UIColor *fillColor;

+ (id)layerWithFillColor:(id)arg1 opacity:(double)arg2 filterType:(id)arg3;

- (id)description;
- (void)configureLayerView:(id)arg1;
- (void)deconfigureLayerView:(id)arg1;

@end
