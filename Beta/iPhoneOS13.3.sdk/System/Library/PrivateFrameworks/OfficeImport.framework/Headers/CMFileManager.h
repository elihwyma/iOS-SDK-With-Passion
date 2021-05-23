/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMFileManager : NSObject

+ (id)uniqueFileName:(id)arg1;
+ (id)getTmpDirectory;
+ (unsigned long long)getFileTypeFromPath:(id)arg1;
+ (unsigned long long)getFileTypeFromUTI:(id)arg1;
+ (id)canonicalUrlPrefix:(id)arg1;
+ (id)getUrlProtocol:(id)arg1;

@end
