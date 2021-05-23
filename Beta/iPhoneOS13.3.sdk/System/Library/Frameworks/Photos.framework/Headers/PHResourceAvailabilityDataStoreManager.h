/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@protocol PLResourceDataStore;

@interface PHResourceAvailabilityDataStoreManager : NSObject

{
    _Atomic _Bool _isCancelled;
    struct os_unfair_lock_s _lock;
    id <PLResourceDataStore> _dataStore;
    unsigned long long _requestID;
}

- (id)init;
- (void)cancel;
- (_Bool)isCancelled;
- (void)makeResourceLocallyAvailable:(id)arg1 asset:(id)arg2 options:(id)arg3 managedObjectContext:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end
