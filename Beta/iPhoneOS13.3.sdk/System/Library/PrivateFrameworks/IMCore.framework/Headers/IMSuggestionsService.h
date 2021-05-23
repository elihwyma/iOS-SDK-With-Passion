/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSCache, NSDictionary, NSHashTable, NSMutableDictionary;

@protocol OS_dispatch_queue, SGSuggestionsServiceContactsProtocol;

@interface IMSuggestionsService : NSObject

{
    NSObject<SGSuggestionsServiceContactsProtocol> *_connection;
    NSCache *_cache;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pending;
    NSDictionary *_localTable;
    NSHashTable *_handlesToRetry;
    id _newContactNotificationToken;
    struct __CFRunLoopObserver *_notificationObserver;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)serviceConnection;
- (id)fetchCNContactForSuggestedHandle:(id)arg1;
- (void)scheduleFetchIfNecessaryForHandle:(id)arg1;
- (_Bool)_maybePhoneNumber:(id)arg1;
- (_Bool)_maybeEmailAddress:(id)arg1;
- (_Bool)isBusiness:(id)arg1;
- (void)_startRequestForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3;
- (void)_startRequestForDisplayNameCallbackWithSuggestedName:(id)arg1 displayName:(id)arg2 queue:(id)arg3;
- (void)fetchSuggestedRealNameForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)_contactForSGContactMatch:(id)arg1;
- (void)startUsingLocalLookupsWithTable:(id)arg1;
- (void)stopUsingLocalLookups;
- (id)suggestedNameFromCache:(id)arg1 wasFound:(_Bool *)arg2;

@end
