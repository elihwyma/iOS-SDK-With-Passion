/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, NSURL;

@interface CAMIrisVideoJob : NSObject

{
    NSURL *_videoURL;
    NSString *_stillImagePersistenceUUID;
    NSString *_videoPersistenceUUID;
    NSString *_irisIdentifier;
    long long _captureDevice;
    long long _captureOrientation;
    double _captureTime;
    NSError *_captureError;
    NSString *_filterName;
    NSURL *_filteredVideoURL;
    long long _persistenceOptions;
    long long _temporaryPersistenceOptions;
    NSString *_bundleIdentifier;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _stillImageDisplayTime;
}

@property (nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) NSString *stillImagePersistenceUUID;
@property (nonatomic, readonly) NSString *videoPersistenceUUID;
@property (nonatomic, readonly) NSString *irisIdentifier;
@property (nonatomic, readonly) long long captureDevice;
@property (nonatomic, readonly) long long captureOrientation;
@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic, readonly) CDStruct_1b6d18a9 stillImageDisplayTime;
@property (nonatomic, readonly) double captureTime;
@property (nonatomic, readonly) NSError *captureError;
@property (nonatomic, readonly) NSString *filterName;
@property (nonatomic, readonly) NSURL *filteredVideoURL;
@property (nonatomic) long long persistenceOptions;
@property (nonatomic) long long temporaryPersistenceOptions;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly, getter=isCTMVideo) _Bool CTMVideo;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoURL:(id)arg1 stillImagePersistenceUUID:(id)arg2 videoPersistenceUUID:(id)arg3 irisIdentifier:(id)arg4 captureDevice:(long long)arg5 captureOrientation:(long long)arg6 duration:(CDStruct_1b6d18a9)arg7 stillImageDisplayTime:(CDStruct_1b6d18a9)arg8 captureTime:(double)arg9 captureError:(id)arg10 filterName:(id)arg11 filteredVideoURL:(id)arg12 persistenceOptions:(long long)arg13 temporaryPersistenceOptions:(long long)arg14 bundleIdentifier:(id)arg15;

@end
