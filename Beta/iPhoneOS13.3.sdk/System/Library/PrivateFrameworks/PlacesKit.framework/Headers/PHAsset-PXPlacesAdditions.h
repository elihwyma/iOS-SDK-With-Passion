/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Photos/PHAsset.h>

@class NSString;

@interface PHAsset (PXPlacesAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)pk_fetchPlacesAssetsInAssetCollection:(id)arg1 options:(id)arg2;

- (struct CLLocationCoordinate2D)coordinate;
- (long long)compareTo:(id)arg1;
- (long long)pk_isContentEqualTo:(id)arg1;

@end
