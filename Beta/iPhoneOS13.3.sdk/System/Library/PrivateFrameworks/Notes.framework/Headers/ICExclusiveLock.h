/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ICExclusiveLock : NSObject

{
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (id)init;
- (void)dealloc;
- (id)name;
- (void)lock;
- (void)unlock;
- (void)setName:(id)arg1;
- (_Bool)tryLock;
- (id)initWithName:(id)arg1 cachePath:(id)arg2;

@end
