/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICStoreFileAssetFairPlayInfo, NSData, NSDictionary;

@interface MPStoreFileAssetFairPlayInfo : NSObject

{
    ICStoreFileAssetFairPlayInfo *_internalInfo;
}

@property (copy, nonatomic, readonly) NSDictionary *responseSinfDictionary;
@property (nonatomic, readonly) long long identifier;
@property (copy, nonatomic, readonly) NSData *dpInfoData;
@property (copy, nonatomic, readonly) NSData *pinfData;
@property (copy, nonatomic, readonly) NSData *sinfData;
@property (copy, nonatomic, readonly) NSData *sinf2Data;
@property (copy, nonatomic, readonly) NSDictionary *purchaseBundleSinfDictionary;

- (id)initWithResponseSinfDictionary:(id)arg1;
- (id)initWithiTunesCloudStoreFileAssetFairPlayInfo:(id)arg1;

@end
