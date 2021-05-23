/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUPhotoEditTaskManager : NSObject

+ (id)sharedManager;

- (id)init;
- (void)createEditableCopyForReadOnlyPhoto:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
