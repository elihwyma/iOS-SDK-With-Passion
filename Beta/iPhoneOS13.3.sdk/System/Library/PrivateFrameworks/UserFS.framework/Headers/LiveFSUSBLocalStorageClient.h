/*
 Image: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
 */

#import <LiveFS/LiveFSClient.h>

@interface LiveFSUSBLocalStorageClient : LiveFSClient

+ (id)newManager;

- (id)addDisk:(id)arg1;
- (id)removeAllVirtualDisks;

@end
