/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface AFManagedStorageConnection : NSObject

{
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_connection;
- (void)_clearConnection;
- (id)_synchronousManagedStoreServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_managedStoreService;
- (id)domainObjectForKey:(id)arg1;
- (void)setDomainObject:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1 inKnowledgeStoreWithName:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2 inKnowledgeStoreWithName:(id)arg3;
- (void)resetKnowledgeStoreWithName:(id)arg1;
- (id)_managedStoreServiceWithErrorHandler:(CDUnknownBlockType)arg1;

@end
