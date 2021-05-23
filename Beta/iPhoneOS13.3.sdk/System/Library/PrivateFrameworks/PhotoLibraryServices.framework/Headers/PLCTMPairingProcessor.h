/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPairingProcessor.h>

@interface PLCTMPairingProcessor : PLPairingProcessor

- (id)groupIDForAsset:(id)arg1;
- (id)firstGroupFromAssets:(id)arg1;
- (id)combinePairs:(id)arg1 error:(id *)arg2;
- (id)fetchRequestForSortedGroupIDs:(id)arg1;
- (id)_mapResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 error:(id *)arg3;
- (_Bool)_copyResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 error:(id *)arg3;
- (void)_installSocResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 referencedResourceURLs:(id)arg3;

@end
