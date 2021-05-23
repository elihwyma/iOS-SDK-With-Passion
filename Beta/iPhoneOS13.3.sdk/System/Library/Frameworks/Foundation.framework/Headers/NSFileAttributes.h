/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSDictionary.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSFileAttributes : NSDictionary

{
    NSMutableDictionary *dict;
    struct stat statInfo;
    CDStruct_1b190c06 catInfo;
    NSDictionary *extendedAttrs;
    int fileProtectionClass;
}

+ (id)_attributesAtPath:(id)arg1 partialReturn:(_Bool)arg2 filterResourceFork:(_Bool)arg3 error:(id *)arg4;
+ (id)attributesWithStat:(struct stat *)arg1;
+ (_Bool)_populateCatInfo:(CDStruct_1b190c06 *)arg1 forURL:(id)arg2 statInfo:(struct stat *)arg3 error:(id *)arg4;
+ (id)attributesAtPath:(id)arg1 traverseLink:(_Bool)arg2;
+ (id)_attributesAtURL:(id)arg1 partialReturn:(_Bool)arg2 filterResourceFork:(_Bool)arg3 error:(id *)arg4;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (unsigned long long)fileSize;
- (id)fileModificationDate;
- (id)fileType;
- (unsigned long long)filePosixPermissions;
- (id)fileOwnerAccountName;
- (unsigned long long)fileOwnerAccountNumber;
- (id)fileGroupOwnerAccountName;
- (unsigned long long)fileGroupOwnerAccountNumber;
- (long long)fileSystemNumber;
- (unsigned long long)fileSystemFileNumber;
- (_Bool)isDirectory;

@end
