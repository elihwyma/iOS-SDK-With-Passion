/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKVideo, UIImage;

@protocol NTKAVListing <Swift>

@property (nonatomic, readonly) CLKVideo *video;
@property (nonatomic, readonly) UIImage *image;

- (unsigned short)snapshotDiffers: /* Error: Ran out of types for this method. */;
- (unsigned short)discardAssets;

@end
