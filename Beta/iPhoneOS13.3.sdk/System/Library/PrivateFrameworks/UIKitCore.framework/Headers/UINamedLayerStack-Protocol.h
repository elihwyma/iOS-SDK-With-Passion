/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString;

@protocol UINamedLayerStack <Swift>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *layers;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGImage *flattenedImage;
@property (nonatomic, readonly) id radiosityImage;
@property (nonatomic, readonly) struct CGSize radiosityImageScale;
@property (nonatomic, readonly) _Bool flatImageContainsCornerRadius;

@end
