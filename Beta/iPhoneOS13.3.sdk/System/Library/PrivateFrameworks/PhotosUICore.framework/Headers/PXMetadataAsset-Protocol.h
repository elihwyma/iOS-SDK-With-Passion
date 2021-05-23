/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class CLLocation, NSDate;

@protocol PXMetadataAsset <Swift>

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) _Bool cloudIsDeletable;

@end
