/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXImportImageCacheIdentifier : NSObject

{
    NSString *_assetUuid;
    unsigned long long _sizeType;
    long long _cacheIndex;
}

@property (copy, nonatomic) NSString *assetUuid;
@property (nonatomic) unsigned long long sizeType;
@property (nonatomic) long long cacheIndex;

@end
