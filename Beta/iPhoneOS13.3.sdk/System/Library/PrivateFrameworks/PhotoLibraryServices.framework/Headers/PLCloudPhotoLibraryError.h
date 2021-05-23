/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLCloudPhotoLibraryError : NSObject

+ (id)userMessageForErrorType:(long long)arg1;
+ (id)createErrorWithType:(long long)arg1;
+ (id)createErrorWithType:(long long)arg1 withDebugMessage:(id)arg2;

@end
