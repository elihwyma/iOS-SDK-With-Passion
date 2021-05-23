/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@interface EFResource : NSObject

{
    struct os_unfair_lock_s _unfair_lock;
    _Atomic long long _lockCount;
}

- (id)init;
- (void)lock;
- (void)unlock;
- (void)holdResource;
- (_Bool)returnResource;

@end
