/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNFileServices, NSLocking;

@interface CNProcessSharedLock : NSObject

{
    NSString *_lockFilePath;
    NSString *_name;
    id <NSLocking> _localLock;
    long long _localLockCount;
    int _fileDescriptor;
    id <CNFileServices> _fileServices;
}

@property (copy) NSString *name;
@property (copy, readonly) NSString *lockFilePath;

+ (id)os_log;
+ (id)recursiveSharedLockWithLockFilePath:(id)arg1;
+ (id)sharedLockWithLockFilePath:(id)arg1;
+ (id)semaphoreSharedLockWithLockFilePath:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (_Bool)isValid;
- (void)lock;
- (void)unlock;
- (_Bool)open:(id *)arg1;
- (id)initWithLockFilePath:(id)arg1 localLock:(id)arg2;
- (id)initWithLockFilePath:(id)arg1 localLock:(id)arg2 fileServices:(id)arg3;
- (_Bool)ensureFileDescriptorIsInvalid:(CDUnknownBlockType)arg1;
- (_Bool)openLockFile:(CDUnknownBlockType)arg1;
- (_Bool)ensureFileIsLocal:(CDUnknownBlockType)arg1;
- (_Bool)isValidFileDescriptor;
- (id)errorUserInfoWithDescription:(id)arg1;
- (id)errorUserInfo;
- (void)lockRetryOnEDEADLK;
- (id)exceptionWithName:(id)arg1 reason:(id)arg2;

@end
