/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXLayer.h>

@class CALayer;

@interface SXClippingLayer : SXLayer

{
    CALayer *_contentLayer;
    unsigned long long _clippingMode;
    struct CGRect _contentFrame;
}

@property (retain, nonatomic) CALayer *contentLayer;
@property (nonatomic) unsigned long long clippingMode;
@property (nonatomic) struct CGRect contentFrame;

- (void)layoutSublayers;
- (void)layoutForMasking;
- (void)layoutForContentsRect;

@end
