/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SBIconStateFolderPath : NSObject

{
    NSMutableArray *_folderNames;
    NSMutableArray *_folderDefaultNames;
    NSMutableArray *_folderPaths;
}

@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)enumerateFoldersUsingBlock:(CDUnknownBlockType)arg1;
- (void)addFolderWithName:(id)arg1 defaultName:(id)arg2 indexPath:(id)arg3;
- (id)folderDefaultNameAtIndex:(unsigned long long)arg1;
- (id)folderIndexPathAtIndex:(unsigned long long)arg1;
- (id)folderNameAtIndex:(unsigned long long)arg1;

@end
