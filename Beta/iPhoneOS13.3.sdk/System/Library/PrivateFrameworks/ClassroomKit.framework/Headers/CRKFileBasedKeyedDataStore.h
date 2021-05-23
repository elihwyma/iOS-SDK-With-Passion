/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSFileManager, NSString, NSURL;

@interface CRKFileBasedKeyedDataStore : NSObject

{
    NSURL *_directoryURL;
    NSFileManager *_fileManager;
}

@property (retain, nonatomic) NSURL *directoryURL;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)URLForKey:(id)arg1;
- (id)initWithDirectoryURL:(id)arg1;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)removeDataForKey:(id)arg1 error:(id *)arg2;
- (_Bool)isKeyValid:(id)arg1;
- (_Bool)removeAllDataWithError:(id *)arg1;

@end
