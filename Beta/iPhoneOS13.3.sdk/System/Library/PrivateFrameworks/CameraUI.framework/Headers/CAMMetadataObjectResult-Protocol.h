/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/Swift-Protocol.h>

@class AVMetadataObject, NSString;

@protocol CAMMetadataObjectResult <Swift>

@property (copy, nonatomic, readonly) NSString *metadataType;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) AVMetadataObject *underlyingMetadataObject;

@end
