/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@protocol CNFileServices;

@interface CNFileUtilities : NSObject

{
    id <CNFileServices> _services;
}

+ (id)sharedInstance;
+ (id)os_log;
+ (id)initializeFileLock;
+ (id)sharedLockDirectoryURLWithFileServices:(id)arg1;
+ (id)requestSharedLockDirectoryURLWithFileServices:(id)arg1;
+ (id)fileLock;

- (id)init;
- (id)initWithFileServices:(id)arg1;
- (id)sharedLockUrlWithName:(id)arg1;
- (id)sharedLockDirectoryUrl;
- (_Bool)isFileAtUrlOnARemoteFileSystem:(id)arg1;
- (id)proxyLockUrlForFileAtUrl:(id)arg1;

@end
