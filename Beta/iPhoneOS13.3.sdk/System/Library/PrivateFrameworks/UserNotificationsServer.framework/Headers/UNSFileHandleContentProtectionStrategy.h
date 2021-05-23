/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@interface UNSFileHandleContentProtectionStrategy : NSObject

{
    NSString *_fileProtectionType;
    NSMutableDictionary *_keyedFileHandles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)removeItemAtPath:(id)arg1 error:(id *)arg2;
- (id)initWithFileProtectionType:(id)arg1;
- (_Bool)dataIsAvailableAtPath:(id)arg1;
- (id)dataAtPath:(id)arg1;
- (_Bool)writeData:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (void)migrateDataAtPath:(id)arg1 toPath:(id)arg2;
- (id)allPaths;
- (id)allDataAtPath:(id)arg1;
- (_Bool)removeAllDataAtPath:(id)arg1 error:(id *)arg2;
- (id)_fileHandleForCreatingStoreAtPath:(id)arg1 protectionType:(id)arg2;
- (_Bool)_isFileProtectionTypeSupported:(id)arg1;

@end
