/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class _PASLock, _PASNotificationToken;

@interface PPNamedEntityToTopicMapping : NSObject

{
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)sharedInstance;
+ (id)_filesystemAssetPath;
+ (id)currentTrieSha256;

- (id)init;
- (void)dealloc;
- (id)mappedTopicForEntity:(id)arg1;
- (_Bool)_loadAssetData;

@end
