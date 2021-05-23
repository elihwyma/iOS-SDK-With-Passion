/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableSet, NSString, PFWeakHash;

@protocol PFMulticasterDelegate;

@interface PFMulticaster : NSObject

{
    struct _opaque_pthread_mutex_t _receiverLock;
    NSHashTable *_strongReceivers;
    PFWeakHash *_weakReceivers;
    NSMutableSet *_strongReceiverLists;
    PFWeakHash *_weakReceiverLists;
    _Bool _invalidated;
    _Bool _acceptingReceivers;
    id <PFMulticasterDelegate> _delegate;
}

@property (weak) id <PFMulticasterDelegate> delegate;
@property (readonly) _Bool invalidated;
@property (readonly) _Bool acceptingReceivers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)resolveClassMethod:(SEL)arg1;
+ (Class)_multicasterClassForProtocolNamed:(id)arg1;
+ (id)_newProtocolMulticaster;
+ (id)_protocolNameByDecodingClassName;
+ (id)_subclassNameByEncodingProtocolName:(id)arg1 placeholder:(_Bool)arg2;
+ (_Bool)_isPlaceholderClassByDecodingClassName;
+ (void)_validateProtocol:(id)arg1;
+ (void)configureClass:(Class)arg1 asMulticasterOf:(id)arg2;
+ (id)_extractProtocolFromSelectorName:(id)arg1 prefix:(id)arg2 suffix:(id)arg3;

- (id)init;
- (void)invalidate;
- (void)distributeSelector:(SEL)arg1 distributionBlock:(CDUnknownBlockType)arg2;
- (_Bool)addReceiver:(id)arg1;
- (_Bool)addWeakReceiver:(id)arg1;
- (void)removeReceiver:(id)arg1;
- (void)weakHashBecameEmpty:(id)arg1;
- (void)handleMultiplyRegistered:(id)arg1;
- (void)postNoReceiversNotice;
- (_Bool)stopAcceptingReceivers;
- (void)_enumerateReceiversWithBlock:(CDUnknownBlockType)arg1;
- (void)distributeSelector:(SEL)arg1 toReceivers:(id)arg2 distributionBlock:(CDUnknownBlockType)arg3;

@end
