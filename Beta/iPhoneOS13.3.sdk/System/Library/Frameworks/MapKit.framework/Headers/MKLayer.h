/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface MKLayer : CALayer

{
    struct CGRect _hitBounds;
    struct CGPoint _hitOffset;
    struct CGPoint _hitOutset;
}

@property (nonatomic, readonly) struct CGRect hitBounds;
@property (nonatomic) struct CGPoint hitOffset;
@property (nonatomic) struct CGPoint hitOutset;

- (void)setBounds:(struct CGRect)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1;

@end
