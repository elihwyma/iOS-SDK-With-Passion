/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface AVMomentCaptureMovieRecordingSettings : NSObject

{
    long long _uniqueID;
    unsigned long long _userInitiatedCaptureTime;
    NSString *_videoCodecType;
    NSURL *_movieFileURL;
    NSArray *_movieMetadata;
    _Bool _autoSpatialOverCaptureEnabled;
    NSString *_spatialOverCaptureGroupIdentifier;
    NSURL *_spatialOverCaptureMovieFileURL;
    NSArray *_spatialOverCaptureMovieMetadata;
}

@property (nonatomic, readonly) long long uniqueID;
@property (nonatomic) unsigned long long userInitiatedCaptureTime;
@property (copy, nonatomic) NSString *videoCodecType;
@property (copy, nonatomic) NSURL *movieFileURL;
@property (copy, nonatomic) NSArray *movieMetadata;
@property (nonatomic, getter=isAutoSpatialOverCaptureEnabled) _Bool autoSpatialOverCaptureEnabled;
@property (copy, nonatomic) NSURL *spatialOverCaptureMovieFileURL;
@property (copy, nonatomic) NSArray *spatialOverCaptureMovieMetadata;

+ (id)movieRecordingSettingsFromMomentCaptureSettings:(id)arg1;
+ (id)movieRecordingSettings;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)spatialOverCaptureGroupIdentifier;
- (id)_initFromMomentCaptureSettings:(id)arg1;
- (id)_sanitizedMovieMetadataArrayForMovieMetadataArray:(id)arg1 exceptionReason:(id *)arg2;

@end
