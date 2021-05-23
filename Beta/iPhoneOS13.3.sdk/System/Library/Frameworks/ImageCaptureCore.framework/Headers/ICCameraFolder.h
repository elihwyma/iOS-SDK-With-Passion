/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <ImageCaptureCore/ICCameraItem.h>

@class NSArray, NSMutableArray;

@interface ICCameraFolder : ICCameraItem

{
    NSMutableArray *_files;
    NSMutableArray *_folders;
    struct os_unfair_lock_s _filesLock;
    struct os_unfair_lock_s _foldersLock;
}

@property (retain, nonatomic) NSMutableArray *files;
@property (retain, nonatomic) NSMutableArray *folders;
@property (nonatomic, readonly) NSArray *contents;

- (void)dealloc;
- (id)description;
- (id)valueForUndefinedKey:(id)arg1;
- (void)addFile:(id)arg1;
- (_Bool)hasThumbnail;
- (id)metadata;
- (void)addFolder:(id)arg1;
- (struct CGImage *)thumbnail;
- (void)deleteFile:(id)arg1;
- (void)deleteItem:(id)arg1;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (void)requestThumbnail;
- (void)requestMetadata;
- (void)lockFiles;
- (void)unlockFiles;
- (void)lockFolders;
- (void)unlockFolders;
- (void)deleteFolder:(id)arg1;
- (_Bool)containsItem:(id)arg1;

@end
