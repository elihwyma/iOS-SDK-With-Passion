/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, NSMutableSet;

@interface NTKTimelapseListingFactory : NSObject

{
    CLKDevice *_device;
    NSMutableSet *_assetListings;
}

+ (id)sharedInstanceForDevice:(id)arg1;

- (void)discardAssets;
- (id)posterImageWithTheme:(unsigned long long)arg1;
- (id)_initLibraryForDevice:(id)arg1;
- (id)listingWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(struct CLLocationCoordinate2D)arg3;
- (id)heroImageWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(struct CLLocationCoordinate2D)arg3;
- (void)setTimelapseListingHasAssets:(id)arg1;

@end
