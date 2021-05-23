/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSString, _PASLock;

@interface _PASBundleIdResolver : NSObject

{
    NSString *_exePath;
    _PASLock *_lock;
}

- (id)initWithProcessIdentifier:(int)arg1;
- (void)_populateResultWithLockWitness:(id)arg1;
- (id)bundleIdentifierOrProcessName:(_Bool *)arg1;

@end
