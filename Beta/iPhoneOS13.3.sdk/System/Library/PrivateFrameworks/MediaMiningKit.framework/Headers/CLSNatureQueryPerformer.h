/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSBusinessItemGenericQueryPerformer.h>

@interface CLSNatureQueryPerformer : CLSBusinessItemGenericQueryPerformer

+ (id)categories;
+ (double)defaultPrecision;

- (id)cache;
- (_Bool)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2;

@end
