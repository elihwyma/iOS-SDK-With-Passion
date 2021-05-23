/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSString.h>

@interface NSString (MBSplitPath)

+ (id)mb_stringWithFileSystemRepresentation:(const char *)arg1;

- (void)mb_splitIntoBase:(int *)arg1 andRelativePath:(const char **)arg2;
- (id)mb_stringByAppendingSlash;
- (_Bool)mb_pathComponentExistsInSet:(id)arg1;
- (id)mb_stringByAppendingGreenteaSuffix;
- (id)mb_backupIDByAddingCKPrefix;
- (id)mb_backupIDByRemovingCKPrefix;

@end
