/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSFileManager, NSMutableIndexSet, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface PLSimpleDCIMDirectory : NSObject

{
    NSURL *_baseURL;
    NSString *_subDirSuffix;
    unsigned long long _directoryLimit;
    NSFileManager *_fileManager;
    NSMutableIndexSet *_availableFileNameNumbers;
    NSURL *_currentSubDirectory;
    unsigned long long _currentSubDirectoryNumber;
    NSString *_userInfoPath;
    _Bool _hasLoadedUserInfo;
    _Bool _representsCameraRoll;
    NSObject<OS_dispatch_queue> *_isolation;
}

@property (retain, nonatomic, readonly) NSURL *currentSubDirectory;
@property _Bool representsCameraRoll;
@property (readonly) NSURL *directoryURL;

+ (id)migrateOldPlistToNewPlist:(id)arg1;
+ (id)cameraRollPlistName;
+ (id)cloudPlistName;

- (id)init;
- (void)reset;
- (id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned long long)arg3 userInfoPath:(id)arg4;
- (id)nextAvailableFileURLWithExtension:(id)arg1;
- (void)_saveUserInfo;
- (_Bool)_ensureDirectoryExists:(id)arg1;
- (void)_loadUserInfoLastDirectoryNumber:(id *)arg1 lastFileNumber:(id *)arg2;
- (id)subDirURLForNumber:(unsigned long long)arg1 create:(_Bool)arg2 didCreate:(_Bool *)arg3;
- (struct _NSRange)fileNameNumberRangeForDirNumber:(unsigned long long)arg1;
- (id)availableFileNameNumbersInDirNumber:(unsigned long long)arg1;

@end
