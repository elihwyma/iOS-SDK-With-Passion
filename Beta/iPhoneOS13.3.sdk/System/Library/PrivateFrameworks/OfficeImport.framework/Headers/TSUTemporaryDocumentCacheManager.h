/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TSUTemporaryDirectoryManager.h>

__attribute__((visibility("hidden")))
@interface TSUTemporaryDocumentCacheManager : TSUTemporaryDirectoryManager

+ (id)sharedManager;
+ (id)baseDirectoryURL;

- (id)newDirectoryForDocumentUUID:(id)arg1;

@end
