/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLPhotoDCFObject.h>

@class NSMutableDictionary, PLPhotoDCIMDirectory;

@interface PLPhotoDCFDirectory : PLPhotoDCFObject

{
    PLPhotoDCIMDirectory *_dcimDirectory;
    NSMutableDictionary *_fileGroupsByNumber;
    int _maxFileGroupNumber;
    int _lastUsedFileGroupNumber;
    _Bool _considerInvalidFileGroups;
}

@property _Bool considerInvalidFileGroups;

+ (id)fileGroupRequiredEmptyExtensions;
+ (id)fileGroupRequiredEmptyPrefixes;
+ (void)initializeFileGroupPrefixAndExtensions;

- (id)fullPath;
- (void)ensureDirectoryExists;
- (id)nextAvailableFileGroup;
- (id)_lastUsedFileGroupUserInfoKey;
- (id)initWithName:(id)arg1 number:(int)arg2 dcimDirectory:(id)arg3;
- (id)dcimDirectory;
- (unsigned int)_calculateBaseDirectoryValue;
- (_Bool)canAddFileGroupWithGroupNumber:(int)arg1;
- (_Bool)_canAddItemWithPrefix:(id)arg1 minimumFileGroupNumber:(int)arg2;
- (_Bool)_canAddItemWithPrefix:(id)arg1;
- (_Bool)canAddImage;
- (_Bool)canAddVideo;
- (_Bool)isEntensionValid:(id)arg1;
- (id)fileGroups;
- (id)_nextAvailableFileGroupWithPrefix:(id)arg1 extension:(id)arg2;
- (id)nextAvailableVideoFileGroupWithExtension:(id)arg1;
- (void)removeFileGroup:(id)arg1;
- (void)setWriteIsPending:(_Bool)arg1;

@end
