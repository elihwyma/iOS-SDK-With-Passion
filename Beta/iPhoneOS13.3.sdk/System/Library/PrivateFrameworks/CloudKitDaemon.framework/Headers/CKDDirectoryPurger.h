/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CKDDirectoryPurger : NSObject

{
    CDUnknownBlockType _shouldSkipFileBlock;
    CDUnknownBlockType _shouldRemoveFileBlock;
    NSArray *_paths;
}

@property (retain, nonatomic) NSArray *paths;
@property (copy, nonatomic) CDUnknownBlockType shouldSkipFileBlock;
@property (copy, nonatomic) CDUnknownBlockType shouldRemoveFileBlock;

+ (void)purgeDirectoryAtPath:(id)arg1;

- (void)purge;
- (id)initWithPaths:(id)arg1;

@end
