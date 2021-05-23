/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface PLPhotoDCIMDirectory : NSObject

{
    NSString *_dcimPath;
    NSString *_miscPath;
    NSString *_posterImagePath;
    NSMutableArray *_topLevelDirectories;
    struct __CFDictionary *_topLevelDirectoriesByNumber;
    struct __CFSet *_unusableTopLevelDirectoryNumbers;
    int _lastUsedDirectoryNumber;
    NSMutableDictionary *_userInfo;
    _Bool _userInfoDidChange;
    struct flock *_dcimDirectoryLock;
    int _dcimDirectoryLockDescriptor;
}

- (void)dealloc;
- (id)userInfo;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)unlockDirectory;
- (id)nextAvailableDirectory;
- (void)lockDirectory;
- (id)initWithDCIMPath:(id)arg1;
- (id)_userInfoPath;
- (void)saveUserInfo;
- (id)userInfoObjectForKey:(id)arg1;
- (id)dcimPath;
- (id)miscPath;
- (id)posterImagePath;
- (void)recreateInfoPlist;
- (void)reloadUserInfo;
- (id)dcfDirectories;
- (void)clearDCFDirectories;
- (_Bool)hasChangedExternally;
- (void)setHasChangedExternally:(_Bool)arg1;

@end
