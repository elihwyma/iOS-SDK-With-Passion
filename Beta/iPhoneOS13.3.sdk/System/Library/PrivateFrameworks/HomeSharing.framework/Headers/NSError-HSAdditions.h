/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <Foundation/NSError.h>

@interface NSError (HSAdditions)

+ (id)hs_homeSharingErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hs_cloudErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hs_cloudLibraryUploadErrorWithCode:(long long)arg1 userInfo:(id)arg2;

@end
