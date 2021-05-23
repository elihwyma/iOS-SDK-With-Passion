/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate, PHAsset, UIImage;

@interface PXLinkPresentationConfiguration : NSObject

{
    PHAsset *_keyAsset;
    unsigned long long _photoCount;
    unsigned long long _videoCount;
    unsigned long long _otherItemCount;
    NSDate *_earliestAssetDate;
    NSDate *_latestAssetDate;
    NSDate *_expirationDate;
    UIImage *_placeholderImage;
}

@property (retain, nonatomic) PHAsset *keyAsset;
@property (nonatomic) unsigned long long photoCount;
@property (nonatomic) unsigned long long videoCount;
@property (nonatomic) unsigned long long otherItemCount;
@property (copy, nonatomic) NSDate *earliestAssetDate;
@property (copy, nonatomic) NSDate *latestAssetDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) UIImage *placeholderImage;

- (id)initWithKeyAsset:(id)arg1;

@end
