/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface ICStorageManager : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic, readonly) unsigned long long storageSpaceAvailable;
@property (nonatomic, readonly) _Bool cachingEnabled;

+ (id)sharedManager;

- (id)init;
- (void)ensureStorageIsAvailable:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
