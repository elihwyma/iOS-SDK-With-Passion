/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXActivityUtilities : NSObject

+ (id)sharedWorkQueue;
+ (void)requestMeContactWithCompletion:(CDUnknownBlockType)arg1;
+ (void)requestContactMatchingEmail:(id)arg1 orPhone:(id)arg2 withFirstName:(id)arg3 lastName:(id)arg4 keysToFetch:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
+ (void)requestImageFromPeopleAlbumForPerson:(id)arg1 targetSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestPersonImageWithTargetSize:(struct CGSize)arg1 matchingEmail:(id)arg2 orPhone:(id)arg3 withFirstName:(id)arg4 lastName:(id)arg5 prefersPhotosImage:(_Bool)arg6 withCompletion:(CDUnknownBlockType)arg7;
+ (id)textForDate:(id)arg1;
+ (id)_initialsImageGradientStartColor;
+ (id)_initialsImageGradientEndColor;
+ (id)_tintedInitialsImage:(id)arg1;

@end
