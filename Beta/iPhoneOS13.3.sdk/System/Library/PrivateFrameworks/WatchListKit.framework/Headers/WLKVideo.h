/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString, WLKArtworkVariantListing, WLKVideoAsset;

@interface WLKVideo : NSObject

{
    NSString *_ID;
    NSString *_externalID;
    NSString *_title;
    unsigned long long _duration;
    WLKArtworkVariantListing *_images;
    WLKVideoAsset *_asset;
}

@property (copy, nonatomic, readonly) NSString *ID;
@property (copy, nonatomic, readonly) NSString *externalID;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long duration;
@property (nonatomic, readonly) WLKArtworkVariantListing *images;
@property (nonatomic, readonly) WLKVideoAsset *asset;

+ (id)videosWithDictionaries:(id)arg1;

- (id)initWithDictionary:(id)arg1;

@end
