/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@interface CKPackageDB : NSObject

+ (_Bool)copySQLiteFileAtPath:(id)arg1 toPath:(id)arg2 timeout:(double)arg3 error:(id *)arg4;
+ (_Bool)moveSQLiteFileAtPath:(id)arg1 toPath:(id)arg2 timeout:(double)arg3 error:(id *)arg4;

@end
