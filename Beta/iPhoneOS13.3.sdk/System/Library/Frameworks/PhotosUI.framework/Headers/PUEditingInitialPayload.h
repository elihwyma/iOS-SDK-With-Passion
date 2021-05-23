/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSData, NSDate, NSString, NSURL, PHAdjustmentData;

@interface PUEditingInitialPayload : NSObject

{
    int _fullSizeImageExifOrientation;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    long long _playbackStyle;
    NSDate *_creationDate;
    CLLocation *_location;
    PHAdjustmentData *_adjustmentData;
    long long _adjustmentBaseVersion;
    NSData *_placeholderImageData;
    NSData *_displaySizeImageData;
    NSURL *_videoURL;
    NSString *_videoPathSandboxExtensionToken;
    NSURL *_fullSizeImageURL;
    NSString *_fullSizeImageURLSandboxExtensionToken;
    NSString *_uniformTypeIdentifier;
    CDStruct_1b6d18a9 _livePhotoStillDisplayTime;
}

@property (nonatomic) long long mediaType;
@property (nonatomic) unsigned long long mediaSubtypes;
@property (nonatomic) long long playbackStyle;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) CLLocation *location;
@property (retain, nonatomic) PHAdjustmentData *adjustmentData;
@property (nonatomic) long long adjustmentBaseVersion;
@property (copy, nonatomic) NSData *placeholderImageData;
@property (copy, nonatomic) NSData *displaySizeImageData;
@property (retain, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSString *videoPathSandboxExtensionToken;
@property (nonatomic) CDStruct_1b6d18a9 livePhotoStillDisplayTime;
@property (retain, nonatomic) NSURL *fullSizeImageURL;
@property (copy, nonatomic) NSString *fullSizeImageURLSandboxExtensionToken;
@property (nonatomic) int fullSizeImageExifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
