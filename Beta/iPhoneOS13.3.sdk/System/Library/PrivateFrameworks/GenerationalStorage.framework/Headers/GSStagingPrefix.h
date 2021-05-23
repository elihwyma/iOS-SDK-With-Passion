/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@interface GSStagingPrefix : NSObject

{
    unsigned char _volumeUUID[16];
    int _deviceID;
    NSString *_path;
    NSArray *_pathComponents;
    NSData *_extension;
    long long _sandboxHandle;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)finalize;
- (void)_connectionWithDaemonWasLost;
- (void)_invalidate:(_Bool)arg1;
- (_Bool)_refreshWithError:(id *)arg1;
- (id)initWithDocumentID:(id)arg1;
- (id)stagingPathforCreatingAdditionWithError:(id *)arg1;
- (_Bool)isStagedPath:(id)arg1;
- (void)cleanupStagingPath:(id)arg1;

@end
