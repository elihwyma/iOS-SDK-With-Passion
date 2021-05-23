/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDDomain, FPDExtensionSession, FPDProvider, FPDServer, FPDXPCDomainServicerLifetimeExtender, NSString;

@protocol OS_dispatch_queue, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface FPDXPCDomainServicer : NSObject

{
    FPDServer *_server;
    FPDProvider *__provider;
    NSObject<OS_dispatch_queue> *_requestQueue;
    id _activePresenterObservation;
    FPDXPCDomainServicerLifetimeExtender *_lifetimeExtender;
    _Bool _isALifetimerExtender;
    NSObject<OS_os_transaction> *_serviceTransaction;
    NSString *_providerDomainID;
}

@property (nonatomic, readonly) NSString *providerDomainID;
@property (nonatomic, readonly) FPDExtensionSession *sessionOrNil;
@property (nonatomic, readonly) FPDDomain *domainOrNil;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (int)pid;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAndStartEnumeratingWithSettings:(id)arg1 observer:(id)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)didChangeItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopExtendingLifetime;
- (void)_t_setFilePresenterObserver:(id)arg1;
- (void)resolveItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDomainWithIdentifier:(id)arg1 ejectable:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_unregisterLifetimeExtension;
- (id)__providerIfExists;
- (void)_registerLifetimeExtension;
- (id)providerOrNil;
- (id)newFileProviderProxy;
- (id)initWithServer:(id)arg1 providerDomainID:(id)arg2 pid:(int)arg3;
- (_Bool)clientCanAccessService:(id)arg1 forConnection:(id)arg2;
- (void)startExtendingLifetime;

@end
