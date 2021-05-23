/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@interface AVAssetDownloadStorageManager : NSObject

+ (id)sharedDownloadStorageManager;

- (void)setStorageManagementPolicy:(id)arg1 forURL:(id)arg2;
- (id)storageManagementPolicyForURL:(id)arg1;

@end
