/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@class PHAsset;

@protocol PHAssetPropertySet <Swift>

@property (weak, nonatomic, readonly) PHAsset *asset;

+ (unsigned short)propertySetName;

- (unsigned short)initWithFetchDictionary:asset:prefetched: /* Error: Ran out of types for this method. */;

@end
