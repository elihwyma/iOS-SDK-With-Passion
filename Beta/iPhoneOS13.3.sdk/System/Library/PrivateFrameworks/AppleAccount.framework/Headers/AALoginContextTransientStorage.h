/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class NSLock;

@interface AALoginContextTransientStorage : NSObject

{
    _Bool _hasBeenCleared;
    NSLock *_clearLock;
}

+ (id)sharedStorage;

- (id)init;
- (void)clear;
- (void)save:(id)arg1;
- (void)_saveNonsensitiveParameters:(id)arg1;
- (void)_saveKeychainItem:(id)arg1 forUsername:(id)arg2 service:(id)arg3;
- (id)_readNonsensitiveParameters;
- (id)_keychainItemForUsername:(id)arg1 service:(id)arg2;
- (void)_deleteKeychainItemForUsername:(id)arg1 service:(id)arg2;
- (id)storedContext;

@end
