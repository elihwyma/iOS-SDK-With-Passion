/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface OFMediaMetadataDatabaseCache : NSObject

{
    NSString *_diskCacheFilepath;
    struct sqlite3 *_sqliteDatabase;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)init;
- (void)dealloc;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (_Bool)_open;
- (void)invalidateDiskCaches;
- (id)initWithDiskCacheFilepath:(id)arg1;
- (id)entryForIdentifier:(id)arg1;
- (id)newEntryWithIdentifier:(id)arg1;

@end
