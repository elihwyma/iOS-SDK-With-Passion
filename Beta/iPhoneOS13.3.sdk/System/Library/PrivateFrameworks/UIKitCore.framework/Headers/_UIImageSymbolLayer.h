/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIImageAsset, _UIImageCUIVectorGlyphContent;

@interface _UIImageSymbolLayer : NSObject

{
    UIColor *_color;
    double _scaleFactor;
    UIImageAsset *_asset;
    _UIImageCUIVectorGlyphContent *_content;
    struct CGPoint _offset;
}

@property (retain, nonatomic) UIImageAsset *asset;
@property (retain, nonatomic) _UIImageCUIVectorGlyphContent *content;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic) double scaleFactor;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, getter=isSystemImage) _Bool systemImage;

+ (id)_symbolLayerWithImage:(id)arg1 color:(id)arg2 offset:(struct CGPoint)arg3 scaleFactor:(double)arg4;
+ (id)_symbolLayerWithSystemName:(id)arg1 color:(id)arg2;
+ (id)_symbolLayerWithSystemName:(id)arg1 color:(id)arg2 offset:(struct CGPoint)arg3 scaleFactor:(double)arg4;
+ (id)_symbolLayerWithName:(id)arg1 color:(id)arg2;
+ (id)_symbolLayerWithName:(id)arg1 color:(id)arg2 offset:(struct CGPoint)arg3 scaleFactor:(double)arg4;

@end
