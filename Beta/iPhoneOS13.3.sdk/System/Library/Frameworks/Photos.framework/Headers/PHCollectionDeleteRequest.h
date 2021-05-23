/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHTrashableObjectDeleteRequest.h>

@interface PHCollectionDeleteRequest : PHTrashableObjectDeleteRequest

- (_Bool)validateForDeleteManagedObject:(id)arg1 error:(id *)arg2;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;

@end
