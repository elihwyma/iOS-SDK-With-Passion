/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKLivePhotoBundleUtilities : NSObject

+ (_Bool)fileExistsAtPath:(id)arg1;
+ (id)getLivePhotoBundleURL:(id)arg1;
+ (_Bool)isLivePhotoAtURL:(id)arg1;
+ (id)calculateLivePhotoVideoPath:(id)arg1;
+ (id)attachmentPreviewFileURL:(id)arg1 extension:(id)arg2;
+ (_Bool)writeToBundle:(id)arg1 atURL:(id)arg2;

@end
