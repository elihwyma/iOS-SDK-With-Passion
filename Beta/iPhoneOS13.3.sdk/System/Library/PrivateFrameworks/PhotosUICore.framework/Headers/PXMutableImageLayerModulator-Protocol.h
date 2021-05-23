/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class CALayer, ISLivePhotoUIView;

@protocol PXMutableImageLayerModulator <Swift>

@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) ISLivePhotoUIView *livePhotoView;
@property (nonatomic) _Bool displayingVideoComplement;

- (unsigned short)animateChangesWithDuration: /* Error: Ran out of types for this method. */;
- (unsigned short)removeFilterFromUnownedLayer: /* Error: Ran out of types for this method. */;

@end
