/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <NSObject.h>

@class NSURL;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TPFileStorageManager : NSObject

{
    _Bool _hasClearedLegacyStorage;
    NSURL *_urlForFileSystem;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Bool hasClearedLegacyStorage;
@property (nonatomic, readonly) NSURL *urlForFileSystem;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)localeChanged;
- (id)imageWithName:(id)arg1;
- (void)clearLegacyStorageIfNecessary;
- (id)urlsForLegacyFileSystem;
- (void)deleteStorageAtURLs:(id)arg1;
- (void)saveImage:(id)arg1 withName:(id)arg2;

@end
