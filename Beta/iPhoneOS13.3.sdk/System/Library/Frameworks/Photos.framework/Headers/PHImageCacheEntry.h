/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSMutableArray, NSString;

@interface PHImageCacheEntry : NSObject

{
    NSError *_error;
    struct CGImage *_imageRef;
    NSDictionary *_additionalInfo;
    struct os_unfair_lock_s _lock;
    _Bool _isCancelled;
    NSMutableArray *_handlersWaitingOnResult;
    int _imageRequestIDForPopulatingCache;
}

@property (nonatomic) int imageRequestIDForPopulatingCache;
@property (nonatomic, readonly) NSDictionary *additionalInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (_Bool)isCancelled;
- (void)prepareForReuse;
- (struct CGImage *)createImageRef;
- (_Bool)hasImageRef;
- (void)_callWaiters:(id)arg1 wasCancelled:(_Bool)arg2;
- (void)addNotifyHandler:(CDUnknownBlockType)arg1;
- (void)populateWithImageRef:(struct CGImage *)arg1 additionalInfo:(id)arg2 error:(id)arg3 executeBeforeNotifyingWaitersBlock:(CDUnknownBlockType)arg4;

@end
