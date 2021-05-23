/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PCDistributedLock : NSObject

{
    NSString *_path;
    int _fd;
}

- (void)dealloc;
- (void)lock;
- (void)unlock;
- (id)initWithName:(id)arg1;
- (id)initWithPath:(id)arg1;
- (_Bool)tryLock;
- (_Bool)_lockBlocking:(_Bool)arg1;

@end
