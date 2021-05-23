/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, CLKVideo, NSArray, NSString, UIColor, UIImage;

@interface NTKVideoPlayerListing : NSObject

{
    CLKDevice *_device;
    CLKVideo *_video;
    NSString *_filename;
    UIImage *_image;
    UIColor *_color;
    NSArray *_attributes;
    unsigned long long _endBehavior;
}

@property (retain, nonatomic) NSArray *attributes;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) unsigned long long endBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CLKVideo *video;
@property (nonatomic, readonly) UIImage *image;

+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2;
+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2 andColor:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)snapshotDiffers:(id)arg1;
- (void)discardAssets;
- (id)initForDevice:(id)arg1 withFilename:(id)arg2;

@end
