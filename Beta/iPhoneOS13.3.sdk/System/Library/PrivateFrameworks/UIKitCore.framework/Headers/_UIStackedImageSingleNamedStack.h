/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, _UIStackedImageSingleNamedLayerImage;

__attribute__((visibility("hidden")))
@interface _UIStackedImageSingleNamedStack : NSObject

{
    _UIStackedImageSingleNamedLayerImage *_layerImage;
}

@property (retain, nonatomic) _UIStackedImageSingleNamedLayerImage *layerImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *layers;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGImage *flattenedImage;
@property (nonatomic, readonly) id radiosityImage;
@property (nonatomic, readonly) struct CGSize radiosityImageScale;
@property (nonatomic, readonly) _Bool flatImageContainsCornerRadius;

@end
