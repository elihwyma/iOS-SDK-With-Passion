/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPDefaultPhotoLibraryManager : NSObject

+ (id)sharedManager;

- (id)init;
- (id)defaultPhotoLibrary;

@end
