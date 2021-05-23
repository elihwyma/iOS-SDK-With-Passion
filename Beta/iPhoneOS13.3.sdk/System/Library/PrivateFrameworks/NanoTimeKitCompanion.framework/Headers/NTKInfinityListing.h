/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, CLKVideo, NSString, NTKInfinityListingAttributes, UIImage;

@interface NTKInfinityListing : NSObject

{
    CLKDevice *_device;
    NSString *_filename;
    CLKVideo *_video;
    UIImage *_image;
    unsigned long long _type;
    unsigned long long _playback;
    NTKInfinityListingAttributes *_attributes;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long playback;
@property (retain, nonatomic) NTKInfinityListingAttributes *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CLKVideo *video;
@property (nonatomic, readonly) UIImage *image;

+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2;
+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2 type:(unsigned long long)arg3 attributes:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)complicationColor;
- (_Bool)snapshotDiffers:(id)arg1;
- (void)discardAssets;
- (id)initForDevice:(id)arg1 withFilename:(id)arg2;

@end
