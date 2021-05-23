/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLResourceDataStoreManager : NSObject

+ (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
+ (id)storesForLibraryID:(id)arg1;
+ (id)storeForExternalResource:(id)arg1 inLibraryWithID:(id)arg2;
+ (id)storeExternalResources:(id)arg1 forAsset:(id)arg2 forLifecycleEvent:(unsigned int)arg3 error:(id *)arg4;

@end
