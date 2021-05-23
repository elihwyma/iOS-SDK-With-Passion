/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3MusicLibraryResourcesManagerContext, NSString, _ML3BaseMusicLibraryResourcesManager;

@interface ML3MusicLibraryResourcesManager : NSObject

{
    ML3MusicLibraryResourcesManagerContext *_context;
    _ML3BaseMusicLibraryResourcesManager *_implementation;
}

@property (retain, nonatomic) _ML3BaseMusicLibraryResourcesManager *implementation;
@property (retain, nonatomic) ML3MusicLibraryResourcesManagerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)sharedManager;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)pathForResourceFileOrFolder:(int)arg1;
- (id)libraryContainerPathByAppendingPathComponent:(id)arg1;
- (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(_Bool)arg3 createParentFolderIfNecessary:(_Bool)arg4;
- (id)libraryContainerPath;
- (id)libraryContainerRelativePath:(id)arg1;
- (id)pathForBaseLocationPath:(long long)arg1;
- (id)initWithBaseResourcesManager:(id)arg1;

@end
