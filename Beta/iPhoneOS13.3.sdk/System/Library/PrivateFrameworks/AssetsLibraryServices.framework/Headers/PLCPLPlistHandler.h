/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLCPLPlistHandler : NSObject

+ (void)initialize;
+ (void)saveCPLPlistObject:(id)arg1 forKey:(id)arg2 pathManager:(id)arg3;
+ (id)readCPLPlistObjectWithKey:(id)arg1 pathManager:(id)arg2;
+ (_Bool)CPLPlistFileExistsWithPathManager:(id)arg1;
+ (void)deleteCPLPlistWithPathManager:(id)arg1;
+ (id)_readCPLPlistWithPathManager:(id)arg1 error:(id *)arg2;

@end
