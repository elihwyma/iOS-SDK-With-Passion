/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate, NSString, NSURL;

@protocol PXDisplayMomentShare <Swift>

@property (nonatomic, readonly) unsigned short status;
@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, readonly) unsigned long long videosCount;
@property (nonatomic, readonly) unsigned long long uploadedPhotosCount;
@property (nonatomic, readonly) unsigned long long uploadedVideosCount;
@property (nonatomic, readonly) NSURL *shareURL;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) long long px_momentShareType;

@end
