/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PHRecyclableObjectVendor;

@protocol PHImageCacheDelegate;

@interface PHImageCache : NSObject

{
    NSMutableDictionary *_backingDictionary;
    NSMutableDictionary *_uncommittedInserts;
    NSMutableDictionary *_uncommittedDeletes;
    struct os_unfair_lock_s _lock;
    PHRecyclableObjectVendor *_entryVendor;
    id <PHImageCacheDelegate> _delegate;
}

@property (weak, nonatomic) id <PHImageCacheDelegate> delegate;

- (id)init;
- (void)removeAllEntries;
- (void)_removeEntry:(id)arg1;
- (_Bool)pinEntryForKey:(id)arg1 requestID:(int)arg2 inFlightRequestID:(int *)arg3;
- (_Bool)populateEntryWithImage:(struct CGImage *)arg1 requestID:(int)arg2 forKey:(id)arg3 additionalInfo:(id)arg4;
- (void)queryEntryForKey:(id)arg1 didWaitForInFlightRequest:(_Bool *)arg2 didFindImage:(_Bool *)arg3 entryIsValidBlock:(CDUnknownBlockType)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)removeEntriesForKeys:(id)arg1;
- (void)commitChangesWithQueueToProcessDeletes:(id)arg1;
- (void)_didReceiveMemoryWarningNotification:(id)arg1;

@end
