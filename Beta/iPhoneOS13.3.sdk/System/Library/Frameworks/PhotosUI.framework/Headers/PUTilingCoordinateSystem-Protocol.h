/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@protocol PUTilingCoordinateSystem;

@protocol PUTilingCoordinateSystem <Swift>

@property (weak, nonatomic, readonly) id <PUTilingCoordinateSystem> parentCoordinateSystem;
@property (nonatomic, readonly) struct CGPoint coordinateSystemOrigin;

@end
