/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString;

@interface CUKeyValueStoreWriter : NSObject

{
    struct cdb_make _cdb;
    _Bool _cdbStarted;
    NSString *_finalPath;
    int _tempFD;
    char _tempPath[1024];
}

- (id)init;
- (void)dealloc;
- (void)cancel;
- (_Bool)startAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)finishAndReturnError:(id *)arg1;
- (_Bool)addKey:(id)arg1 value:(id)arg2 error:(id *)arg3;

@end
