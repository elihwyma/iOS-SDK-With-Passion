/*
 Image: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
 */

#import <NSObject.h>

@interface _BCUCoverEffectsAssets : NSObject

{
    struct CGImage *_spineNormalBlend;
    struct CGImage *_spineLinearBurnBlend;
    struct CGImage *_spineSoftLightBlend;
    struct CGImage *_edges;
    struct CGColor *_overlayColor;
}

@property (nonatomic, readonly) struct CGImage *spineNormalBlend;
@property (nonatomic, readonly) struct CGImage *spineLinearBurnBlend;
@property (nonatomic, readonly) struct CGImage *spineSoftLightBlend;
@property (nonatomic, readonly) struct CGImage *edges;
@property (nonatomic, readonly) struct CGColor *overlayColor;

- (id)initWithBundle:(id)arg1 rtl:(_Bool)arg2 night:(_Bool)arg3;

@end
