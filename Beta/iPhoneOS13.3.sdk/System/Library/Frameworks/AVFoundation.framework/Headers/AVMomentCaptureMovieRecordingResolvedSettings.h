/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface AVMomentCaptureMovieRecordingResolvedSettings : NSObject

{
    long long _uniqueID;
    _Bool _torchEnabled;
    NSURL *_movieURL;
    NSURL *_spatialOverCaptureURL;
    CDStruct_79c71658 _movieDimensions;
}

@property (readonly) long long uniqueID;
@property (readonly, getter=isTorchEnabled) _Bool torchEnabled;
@property (readonly) NSURL *movieURL;
@property (readonly) NSURL *spatialOverCaptureURL;
@property (readonly) CDStruct_79c71658 movieDimensions;

+ (id)movieRecordingResolvedSettingsWithUniqueID:(long long)arg1 torchEnabled:(_Bool)arg2 movieURL:(id)arg3 spatialOverCaptureURL:(id)arg4 movieDimensions:(CDStruct_79c71658)arg5;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)_initWithUniqueID:(long long)arg1 torchEnabled:(_Bool)arg2 movieURL:(id)arg3 spatialOverCaptureURL:(id)arg4 movieDimensions:(CDStruct_79c71658)arg5;

@end
