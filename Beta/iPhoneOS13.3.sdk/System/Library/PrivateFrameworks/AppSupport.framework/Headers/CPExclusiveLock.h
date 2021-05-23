/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CPExclusiveLock : NSObject

{
    int _fd;
    NSString *_name;
}

- (id)init;
- (void)dealloc;
- (id)name;
- (void)lock;
- (void)unlock;
- (void)setName:(id)arg1;
- (id)initWithName:(id)arg1;
- (_Bool)tryLock;

@end
