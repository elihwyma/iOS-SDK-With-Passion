/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSArray, PHAsset, PHPhotoLibrary;

@interface PHRelatedFetchOptions : NSObject

{
    _Bool _enableDiversity;
    _Bool _debugInfoEnabled;
    NSArray *_excludedAssetCollections;
    PHAsset *_referenceAsset;
    unsigned long long _fetchLimit;
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic, getter=isDebugInfoEnabled) _Bool debugInfoEnabled;
@property (retain, nonatomic) NSArray *excludedAssetCollections;
@property (retain, nonatomic) PHAsset *referenceAsset;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) _Bool enableDiversity;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;

@end
