/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class CNContactStore, NSArray, NSCache, NSHashTable;

@protocol OS_dispatch_queue;

@interface PKPeerPaymentContactResolver : NSObject

{
    NSObject<OS_dispatch_queue> *_contactLookupQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CNContactStore *_contactStore;
    NSArray *_keysToFetch;
    NSCache *_handleToContactCache;
    NSHashTable *_delegates;
}

@property (retain, nonatomic) NSCache *handleToContactCache;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSHashTable *delegates;
@property (nonatomic, readonly) NSArray *keysToFetch;

- (void)invalidateCache;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2;
- (id)contactForHandle:(id)arg1;
- (void)_handleContactStoreDidChangeNotification:(id)arg1;
- (id)_predicateForHandle:(id)arg1;
- (_Bool)haveCachedResultForHandle:(id)arg1;
- (void)contactForHandle:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
