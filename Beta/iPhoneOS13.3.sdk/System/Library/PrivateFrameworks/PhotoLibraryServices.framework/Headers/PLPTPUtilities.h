/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLPTPUtilities : NSObject

+ (id)pathForSidecar:(id)arg1 onAsset:(id)arg2;
+ (void)enumerateAvailableSidecarFilesOnAsset:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)enumerateAvailableSidecarFilesOnAsset:(id)arg1 withFileManager:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (_Bool)shouldExpungeAsset:(id)arg1;
+ (_Bool)shouldExpungeAsset:(id)arg1 withFileManager:(id)arg2;

@end
