/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@interface PVExportHelper : NSObject

+ (_Bool)snapshotPhotoLibrary:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (_Bool)exportPhotoLibrary:(id)arg1 toURL:(id)arg2 forPeopleType:(unsigned long long)arg3 error:(id *)arg4;
+ (id)_peopleClustersDictionaryForType:(unsigned long long)arg1 withPhotoLibrary:(id)arg2;

@end
