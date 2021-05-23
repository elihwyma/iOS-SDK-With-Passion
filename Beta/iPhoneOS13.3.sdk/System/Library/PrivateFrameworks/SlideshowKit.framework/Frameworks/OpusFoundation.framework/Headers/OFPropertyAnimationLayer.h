/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <CALayer.h>

@interface OFPropertyAnimationLayer : CALayer

@property (nonatomic) struct CGPoint animatedPoint;
@property (nonatomic) double animatedFloat;

+ (_Bool)needsDisplayForKey:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;

@end
