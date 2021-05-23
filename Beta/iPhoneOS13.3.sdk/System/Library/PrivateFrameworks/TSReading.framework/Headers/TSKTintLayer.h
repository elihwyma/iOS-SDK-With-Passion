/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <QuartzCore/CAReplicatorLayer.h>

@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer

{
    CALayer *_contentsLayer;
}

@property (retain, nonatomic) CALayer *contentsLayer;
@property struct CGColor *tintColor;

- (void)dealloc;
- (id)contents;
- (void)setContents:(id)arg1;
- (void)setNeedsDisplay;
- (void)layoutSublayers;

@end
