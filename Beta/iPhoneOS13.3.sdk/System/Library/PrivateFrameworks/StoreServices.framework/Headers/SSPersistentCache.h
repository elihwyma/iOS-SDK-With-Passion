/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSFileManager, NSString;

@protocol OS_dispatch_queue;

@interface SSPersistentCache : NSObject

{
    _Bool _safeKeys;
    NSString *_identifier;
    NSString *_cacheName;
    NSString *_path;
    NSFileManager *_fm;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)safeKeyForKey:(id)arg1;

- (void)dealloc;
- (id)description;
- (_Bool)clear;
- (id)dataForKey:(id)arg1;
- (_Bool)setData:(id)arg1 forKey:(id)arg2;
- (_Bool)removeDataForKey:(id)arg1;
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2;
- (id)_pathForKey:(id)arg1;
- (_Bool)_isFileNotFound:(id)arg1;
- (void)setFilenameSafeKeys:(_Bool)arg1;

@end
