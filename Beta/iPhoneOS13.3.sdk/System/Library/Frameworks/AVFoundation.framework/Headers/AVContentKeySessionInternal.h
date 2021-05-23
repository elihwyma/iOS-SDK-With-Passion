/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSData, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVContentKeySessionInternal : NSObject

{
    AVWeakReferencingDelegateStorage *_delegateStorage;
    AVWeakReference *_weakReference;
    NSURL *_storageURL;
    NSData *_appIdentifier;
    _Bool _isExpired;
    _Bool _internal;
    NSObject<OS_dispatch_queue> *_threadSafetyQ;
    struct __CFData *_protectorSessionIdentifier;
    NSHashTable *_contentKeyRecipients;
    struct OpaqueFigContentKeySession *_figContentKeySession;
    NSMutableArray *_cryptorsList;
    NSString *_keySystem;
    NSMutableDictionary *keyRequestsByRequestID;
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@end
