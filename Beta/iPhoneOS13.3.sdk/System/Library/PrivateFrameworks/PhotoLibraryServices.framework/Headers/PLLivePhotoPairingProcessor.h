/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPairingProcessor.h>

@interface PLLivePhotoPairingProcessor : PLPairingProcessor

- (id)groupIDForAsset:(id)arg1;
- (id)firstGroupFromAssets:(id)arg1;
- (id)combinePairs:(id)arg1 error:(id *)arg2;
- (id)fetchRequestForSortedGroupIDs:(id)arg1;

@end
