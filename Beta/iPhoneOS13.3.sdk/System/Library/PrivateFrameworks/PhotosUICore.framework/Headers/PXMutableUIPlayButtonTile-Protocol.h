/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class PXImageRequester;

@protocol PXMutableUIPlayButtonTile <Swift>

@property (nonatomic) struct CGSize playButtonSize;
@property (nonatomic) long long playButtonStyle;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (nonatomic) struct CGPoint imageViewportLocation;
@property (nonatomic) _Bool allowsBackdropStatisticsSuppression;

@end
