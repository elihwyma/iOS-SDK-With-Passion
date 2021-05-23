/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/Swift-Protocol.h>

@class NSString, NSURL, UIImage;

@protocol PUTransientDisplayAsset <Swift>

@property (copy, nonatomic, readonly) NSURL *persistenceURL;
@property (nonatomic, readonly, getter=isHDR) _Bool HDR;
@property (copy, nonatomic, readonly) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly) UIImage *placeholderImage;

@end
