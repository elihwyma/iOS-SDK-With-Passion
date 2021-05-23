/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface PLFileSystemPersistence : NSObject

{
    NSObject<OS_dispatch_queue> *_writerQueue;
}

+ (id)sharedInstance;
+ (void)performBlockOnWriterQueue:(CDUnknownBlockType)arg1;
+ (id)filesystemPersistenceBatchItemForFileAtURL:(id)arg1;
+ (void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (id)persistedAttributesForFileAtURL:(id)arg1;
+ (void)persistMetadata:(id)arg1 fileURL:(id)arg2;
+ (void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (id)persistedAttributesForFileAtURL:(id)arg1 exists:(_Bool *)arg2 includeUnknownAttributes:(_Bool)arg3;
+ (id)persistenceKeyTypes;
+ (void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)clearAllAttributesForFileAtUrl:(id)arg1;

- (id)init;
- (void)_backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2;
- (void)_performOnWriterQueueWithIdentifier:(const char *)arg1 block:(CDUnknownBlockType)arg2;

@end
