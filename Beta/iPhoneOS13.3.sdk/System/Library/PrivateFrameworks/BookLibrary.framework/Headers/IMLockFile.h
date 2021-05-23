/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IMLockFile : NSObject

{
    int _fd;
    _Bool _locked;
    NSString *_path;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) _Bool locked;

+ (id)iTunesSyncLockFile;
+ (id)iTunesSyncLockFilePath;

- (void)dealloc;
- (void)unlock;
- (id)initWithPath:(id)arg1;
- (_Bool)lock:(_Bool)arg1;
- (_Bool)tryLock:(_Bool)arg1;
- (_Bool)lockWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)_lock:(_Bool)arg1 blocking:(_Bool)arg2;

@end
