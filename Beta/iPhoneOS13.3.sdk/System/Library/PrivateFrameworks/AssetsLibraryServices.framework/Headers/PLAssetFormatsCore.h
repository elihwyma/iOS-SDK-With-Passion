/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLAssetFormatsCore : NSObject

+ (struct CGRect)centeredRectForSourceSize:(struct CGSize)arg1 destinationSize:(struct CGSize)arg2;
+ (struct CGSize)sizeForFormat:(long long)arg1;
+ (struct CGSize)scaledSizeForSize:(struct CGSize)arg1 format:(long long)arg2 capLength:(_Bool)arg3;
+ (_Bool)formatSizeIsShortSide:(long long)arg1;

@end
