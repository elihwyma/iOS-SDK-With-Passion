/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKPackageManifest : NSObject

+ (_Bool)readContentsOfFile:(id)arg1 intoPackage:(id)arg2 error:(id *)arg3;
+ (_Bool)writePackage:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
+ (id)packageInClientWithBasePath:(id)arg1 contentsOfFile:(id)arg2 error:(id *)arg3;

@end
