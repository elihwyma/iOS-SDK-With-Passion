/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, NSURL, VCPFingerprint;

__attribute__((visibility("hidden")))
@interface VCPAsset : NSObject

@property (nonatomic, readonly) _Bool isPano;
@property (nonatomic, readonly) _Bool isLivePhoto;
@property (nonatomic, readonly) _Bool isScreenshot;
@property (nonatomic, readonly) _Bool isHDR;
@property (nonatomic, readonly) _Bool isSDOF;
@property (nonatomic, readonly) NSDictionary *exif;
@property (nonatomic, readonly) _Bool hadFlash;
@property (nonatomic, readonly) float exposureTimeSeconds;
@property (nonatomic, readonly) float photoOffsetSeconds;
@property (nonatomic, readonly) float originalPhotoOffsetSeconds;
@property (nonatomic, readonly) _Bool isSlowmo;
@property (nonatomic, readonly) _Bool isTimelapse;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) float slowmoRate;
@property (nonatomic, readonly) float timelapseRate;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) VCPFingerprint *fingerprint;
@property (nonatomic, readonly) _Bool isImage;
@property (nonatomic, readonly) _Bool isMovie;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSURL *mainFileURL;

+ (void)unimplementedExceptionForMethodName:(id)arg1;

- (id)movie;
- (struct __CVBuffer *)imageWithPreferredDimension:(unsigned long long)arg1;
- (id)streamedMovie;
- (id)originalMovie;

@end
