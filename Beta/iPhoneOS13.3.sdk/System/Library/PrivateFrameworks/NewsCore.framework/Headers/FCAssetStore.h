/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FCAssetStore : NSObject

{
    NSString *_directoryPath;
    NSString *_preferredExtension;
    NSMutableDictionary *_fileURLsByKey;
}

@property (copy, nonatomic) NSString *directoryPath;
@property (copy, nonatomic) NSString *preferredExtension;
@property (copy, nonatomic) NSMutableDictionary *fileURLsByKey;

- (id)allKeys;
- (unsigned long long)storeSize;
- (_Bool)removeAllFiles;
- (id)_keyForFileName:(id)arg1;
- (id)_filePathForKey:(id)arg1;
- (_Bool)removeFileWithKey:(id)arg1;
- (id)fileURLForKey:(id)arg1;
- (unsigned long long)_sizeOfFileAtURL:(id)arg1;
- (unsigned long long)storeSizeForKeys:(id)arg1;
- (id)initWithDirectoryAtPath:(id)arg1 preferredAssetPathExtension:(id)arg2;
- (id)copyFileAtPath:(id)arg1 withKey:(id)arg2;
- (id)moveFileAtPath:(id)arg1 withKey:(id)arg2;
- (id)copyData:(id)arg1 withKey:(id)arg2;
- (_Bool)removeAllFilesExceptKeys:(id)arg1;
- (id)filePathForKey:(id)arg1;
- (unsigned long long)sizeOfFileForKey:(id)arg1;

@end
