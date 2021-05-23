/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@interface MBFileManager : NSObject

+ (id)defaultManager;

- (_Bool)fileExistsAtPath:(id)arg1;
- (id)fileAttributesAtPath:(id)arg1 traverseLink:(_Bool)arg2;
- (id)directoryContentsAtPath:(id)arg1;
- (_Bool)createDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (_Bool)removeFileAtPath:(id)arg1;
- (_Bool)copyPath:(id)arg1 toPath:(id)arg2;
- (_Bool)movePath:(id)arg1 toPath:(id)arg2;

@end
