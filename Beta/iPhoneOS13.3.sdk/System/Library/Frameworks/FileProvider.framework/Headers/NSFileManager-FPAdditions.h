/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (FPAdditions)

- (id)fp_trashURLForItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)fp_trashItemAtURL:(id)arg1 resultingItemURL:(id *)arg2 error:(id *)arg3;
- (void)fp_createPathIfNeeded:(id)arg1;

@end
