/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <StorageSettings/STMSizeCache.h>

@class NSArray, NSMutableDictionary;

@interface STMSizer : STMSizeCache

{
    struct os_unfair_lock_s _pendingEventsLock;
    NSMutableDictionary *_pendingEventsByPath;
    struct __FSEventStream *_fsStream;
    _Bool _streamRunning;
    NSArray *_rootPaths;
}

@property (retain, nonatomic) NSArray *rootPaths;

- (void)dealloc;
- (id)initWithPrefsKey:(id)arg1;
- (void)setEvent:(id)arg1 forItem:(id)arg2;
- (void)startSizing:(id)arg1;
- (void)startSizer;
- (void)stopSizer;
- (void)processEvents:(id)arg1;

@end
