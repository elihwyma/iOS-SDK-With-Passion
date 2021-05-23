/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

@interface SUMediaLibraryAdamIDCache : NSObject

{
    NSMutableSet *_adamIDs;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _isPopulated;
}

+ (id)sharedCache;

- (id)init;
- (void)dealloc;
- (void)_populateCache;
- (void)getContainsAdamID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getIntersectionWithSet:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_libraryChangedNotification:(id)arg1;
- (void)populateCache;

@end
