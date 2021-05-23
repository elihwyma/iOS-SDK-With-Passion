/*
 Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
 */

#import <Foundation/NSObject.h>

@class CKContextSemaphore, NSMutableArray, NSSet, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CKContextClient : NSObject

{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    NSObject<OS_dispatch_semaphore> *_sema_capabilities;
    CKContextSemaphore *_serviceSemaphore;
    unsigned long long _defaultRequestType;
}

@property (nonatomic, readonly) unsigned long long defaultRequestType;
@property (nonatomic, readonly) NSSet *capabilities;

+ (id)new;
+ (id)clientWithDefaultRequestType:(unsigned long long)arg1;

- (id)init;
- (void)_handleConfigurationUpdate;
- (void)_updateCachedCapabilites;
- (id)retrieveCapabilites;
- (id)initWithDefaultRequestType:(unsigned long long)arg1;
- (id)newRequest;
- (void)capabilitiesWithReply:(CDUnknownBlockType)arg1;
- (void)ancestorsForTopics:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)ensureFullyInitialized;
- (void)registerConfigurationUpdateHandler:(CDUnknownBlockType)arg1;
- (id)indexVersionId;
- (_Bool)hasServiceSemaphore;
- (_Bool)tryAcquireServiceSemaphore;
- (void)workWithServiceSemaphore:(CDUnknownBlockType)arg1;

@end
