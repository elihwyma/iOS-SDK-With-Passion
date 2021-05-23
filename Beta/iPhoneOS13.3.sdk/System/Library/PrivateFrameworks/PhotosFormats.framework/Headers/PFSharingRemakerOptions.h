/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSDate, NSString, NSURL;

@interface PFSharingRemakerOptions : NSObject

{
    _Bool _shouldStripLocation;
    _Bool _shouldStripAllMetadata;
    _Bool _shouldConvertToSRGB;
    CLLocation *_customLocation;
    NSDate *_customDate;
    NSString *_customAccessibilityLabel;
    NSURL *_outputDirectoryURL;
    NSString *_outputFilename;
    NSString *_exportPreset;
    NSString *_exportFileType;
}

@property (nonatomic) _Bool shouldStripLocation;
@property (nonatomic) _Bool shouldStripAllMetadata;
@property (nonatomic) _Bool shouldConvertToSRGB;
@property (copy, nonatomic) CLLocation *customLocation;
@property (copy, nonatomic) NSDate *customDate;
@property (copy, nonatomic) NSString *customAccessibilityLabel;
@property (copy, nonatomic) NSURL *outputDirectoryURL;
@property (copy, nonatomic) NSString *outputFilename;
@property (copy, nonatomic) NSString *exportPreset;
@property (copy, nonatomic) NSString *exportFileType;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
