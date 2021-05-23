/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <CALayer.h>

@class NSDictionary, NSString;

@interface PKMicaLayer : CALayer

{
    CALayer *_rootLayer;
    NSDictionary *_publishedColorLayers;
    NSDictionary *_publishedColorShapeLayers;
}

@property (nonatomic, readonly) CALayer *rootLayer;
@property (nonatomic, readonly) NSDictionary *publishedColorLayers;
@property (nonatomic, readonly) NSDictionary *publishedColorShapeLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSublayers;
- (id)initWithFrame:(struct CGRect)arg1 package:(id)arg2;
- (double)pointScaleToMatchBoundsSize:(struct CGSize)arg1;
- (struct CGSize)boundsSizeToMatchPointScale:(double)arg1;

@end
