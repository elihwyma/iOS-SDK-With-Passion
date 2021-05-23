/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ML3BaseMusicLibraryResourcesManager : NSObject

{
    NSString *_libraryContainerIdentifier;
}

@property (copy, nonatomic, readonly) NSString *libraryContainerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pathForResourceFileOrFolder:(int)arg1;
- (id)libraryContainerPathByAppendingPathComponent:(id)arg1;
- (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(_Bool)arg3 createParentFolderIfNecessary:(_Bool)arg4;
- (id)libraryContainerPath;
- (id)libraryContainerRelativePath:(id)arg1;
- (id)pathForBaseLocationPath:(long long)arg1;
- (id)initWithAccountInfo:(id)arg1;
- (id)initWithLibraryContainerIdentifier:(id)arg1;
- (id)_libraryContainerPathForDSID:(id)arg1;
- (id)_pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(_Bool)arg3 isFolder:(_Bool *)arg4;
- (id)_controlDirectoryPathWithBasePath:(id)arg1;
- (_Bool)_mediaResourceRequiresLibraryContainerAccess:(int)arg1;

@end
