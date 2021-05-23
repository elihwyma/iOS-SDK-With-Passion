/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (CRKAdditions)

@property (readonly) _Bool crk_isStudentdInstalled;

+ (id)crk_nonContainerizedHomeDirectoryURL;
+ (id)crk_computeNonContainerizedHomeDirectoryURL;

- (_Bool)crk_safeRemoveItemAtURL:(id)arg1 error:(id *)arg2;
- (id)crk_collisionAvoidingURLForURL:(id)arg1;
- (id)crk_deepContentsOfDirectoryAtPath:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end
