/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPPaths : NSObject

+ (id)logDirectory;
+ (id)topDirectory;
+ (id)subdirectory:(id)arg1;
+ (id)filename:(id)arg1 subdirectory:(id)arg2;
+ (id)topDirectoryCreateIfNeeded:(_Bool)arg1;
+ (id)subdirectory:(id)arg1 createIfNeeded:(_Bool)arg2;
+ (id)filename:(id)arg1 subdirectory:(id)arg2 createIfNeeded:(_Bool)arg3;
+ (id)logSubdirectory:(id)arg1;
+ (id)filename:(id)arg1 logSubdirectory:(id)arg2;
+ (id)logDirectoryCreateIfNeeded:(_Bool)arg1;
+ (id)logSubdirectory:(id)arg1 createIfNeeded:(_Bool)arg2;
+ (id)filename:(id)arg1 logSubdirectory:(id)arg2 createIfNeeded:(_Bool)arg3;

@end
