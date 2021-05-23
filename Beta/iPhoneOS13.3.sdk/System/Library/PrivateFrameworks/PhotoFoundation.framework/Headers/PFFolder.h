/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFFile.h>

@class NSMutableArray;

@interface PFFolder : PFFile

{
    _Bool _isLeaf;
    NSMutableArray *_files;
    NSMutableArray *_folders;
}

@property (retain, nonatomic) NSMutableArray *files;
@property (retain, nonatomic) NSMutableArray *folders;
@property (nonatomic) _Bool isLeaf;

- (id)init;
- (void)addFile:(id)arg1;
- (void)addFiles:(id)arg1;
- (void)addFolders:(id)arg1;
- (void)addFolder:(id)arg1;

@end
