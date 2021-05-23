/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudKit/CKPackage.h>

@interface CKPackage (BRCItemAdditions)

+ (void)destroyAnchorAndPackageAnchoredAtURL:(id)arg1;
+ (_Bool)anchorExistsForArchiverInfo:(id)arg1;

- (_Bool)anchorAtURL:(id)arg1 error:(id *)arg2;

@end
