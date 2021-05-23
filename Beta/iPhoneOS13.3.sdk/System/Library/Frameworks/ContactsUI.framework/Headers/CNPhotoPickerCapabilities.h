/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNPhotoPickerCapabilities : NSObject

+ (_Bool)allowsPhotoLibraryAccess;
+ (_Bool)allowsAvatarUI;
+ (_Bool)allowsAvatarStoreAccess;
+ (_Bool)allowsAvatarFaceTracking;
+ (_Bool)isCameraTCCEnabled;
+ (_Bool)allowsCameraAccess;

@end
