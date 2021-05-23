/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NTKVideoPlayerListing, UIImage;

@interface NTKVideoPlayerDataSource : NSObject

{
    UIImage *_posterImage;
    NTKVideoPlayerListing *_currentListing;
}

@property (retain, nonatomic) NTKVideoPlayerListing *currentListing;
@property (retain, nonatomic) UIImage *posterImage;

- (id)init;
- (void)advanceToNextListing:(unsigned long long)arg1;
- (id)listingsToQueueAfterCurrent;
- (id)listingToQueueOncePlaybackStarts;

@end
