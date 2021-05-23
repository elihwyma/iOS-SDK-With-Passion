/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCDatabaseBackupRecord : NSObject

{
    _Bool _isDirectory;
    unsigned int _genCount;
    NSString *_relativePath;
    NSNumber *_fileID;
    NSNumber *_docID;
}

@property (retain, nonatomic) NSString *relativePath;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *docID;
@property (nonatomic) unsigned int genCount;
@property (nonatomic) _Bool isDirectory;

- (id)description;
- (id)initWithRelativePath:(id)arg1 fileID:(id)arg2 docID:(id)arg3 genCount:(unsigned int)arg4 isDirectory:(_Bool)arg5;
- (id)initWithPQLResultSet:(id)arg1;

@end
