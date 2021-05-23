/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

@class NSArray;

@interface OFLinearGradientView

@property (copy, nonatomic) NSArray *locations;
@property (copy, nonatomic) NSArray *colors;
@property (nonatomic) struct CGPoint startPoint;
@property (nonatomic) struct CGPoint endPoint;

+ (Class)layerClass;

- (void)dealloc;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)gradientLayer;

@end
