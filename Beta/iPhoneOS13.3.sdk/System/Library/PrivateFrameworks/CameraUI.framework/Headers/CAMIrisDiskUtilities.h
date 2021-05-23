/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMIrisDiskUtilities : NSObject

+ (_Bool)hasPendingWork;
+ (id)irisVideoDirectoryPathCreateIfNeeded:(_Bool)arg1;
+ (id)_substituteForDotInBundleIdentifier;
+ (id)_delimiterForFilenames;
+ (id)irisVideoDirectoryPath;
+ (id)videoPathExtension;
+ (_Bool)parseVideoDestinationPath:(id)arg1 forStillImagePersistenceUUID:(id *)arg2 videoPersistenceUUID:(id *)arg3 captureDevice:(long long *)arg4 captureOrientation:(long long *)arg5 captureTime:(double *)arg6 persistenceOptions:(long long *)arg7 temporaryPersistenceOptions:(long long *)arg8 bundleIdentifier:(id *)arg9 filterName:(id *)arg10;
+ (id)videoDestinationPathForStillImageRequest:(id)arg1 captureTime:(double)arg2 isEV0ForHDR:(_Bool)arg3 bundleIdentifier:(id)arg4;
+ (_Bool)isValidVideoDestinationPath:(id)arg1;

@end
