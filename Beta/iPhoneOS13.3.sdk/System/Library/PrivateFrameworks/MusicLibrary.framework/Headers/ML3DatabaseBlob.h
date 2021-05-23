/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@interface ML3DatabaseBlob : NSObject

{
    struct sqlite3_blob *_sqliteHandle;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)length;
- (id)data;
- (int)readData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (id)initWithSQLiteHandle:(struct sqlite3_blob *)arg1;
- (int)writeData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3;

@end
