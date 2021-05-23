/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObjectContext.h>

@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext

+ (_Bool)canMergeRemoteChanges;
+ (_Bool)shouldHavePhotoLibrary;

- (id)photoLibrary;
- (_Bool)isDatabaseCreationContext;

@end
