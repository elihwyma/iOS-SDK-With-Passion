/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@protocol UINamedLayerContentProvider;

__attribute__((visibility("hidden")))
@interface _UIStackedImageSingleNamedLayerImage : NSObject

{
    UIImage *_imageObj;
}

@property (retain, nonatomic) UIImage *imageObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) int blendMode;
@property (nonatomic) _Bool fixedFrame;
@property (nonatomic, readonly) id <UINamedLayerContentProvider> contentProvider;

@end
