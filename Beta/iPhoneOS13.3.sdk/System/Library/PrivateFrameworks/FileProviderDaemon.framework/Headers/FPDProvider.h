/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDExtension, FPDExtensionManager, FPDProviderDescriptor, FPDServer, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface FPDProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_domainQueue;
    _Bool _invalidated;
    FPDProviderDescriptor *_descriptor;
    NSSet *_blacklistedProcessNames;
    NSURL *_supportURL;
    NSURL *_domainsPlistURL;
    NSURL *_providerPlistURL;
    FPDServer *_server;
    FPDExtensionManager *_manager;
    NSMutableDictionary *_domainsByID;
    NSArray *_requestedExtendedAttributes;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSArray *requestedExtendedAttributes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) FPDProviderDescriptor *descriptor;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *purposeIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSArray *extensionStorageURLs;
@property (nonatomic, readonly) _Bool supportsEnumeration;
@property (nonatomic, readonly) _Bool invalidated;
@property (nonatomic, readonly) _Bool supportsFPFS;
@property (nonatomic, readonly, getter=isDisabledByFPFSSettings) _Bool disabledByFPFSSettings;
@property (nonatomic, readonly) _Bool isAppExtensionReachable;
@property (nonatomic, readonly) FPDExtension *asAppExtensionBackedProvider;
@property (retain, nonatomic) NSSet *blacklistedProcessNames;
@property (nonatomic, readonly) NSURL *supportURL;
@property (nonatomic, readonly) NSURL *domainsPlistURL;
@property (nonatomic, readonly) NSURL *providerPlistURL;
@property (nonatomic, readonly) FPDServer *server;
@property (nonatomic, readonly) FPDExtensionManager *manager;
@property (nonatomic, readonly) FPDProvider *providerIfNotDisabledByFPFSSettings;
@property (nonatomic, readonly) NSDictionary *relevantDomainsByID;
@property (nonatomic, readonly) NSDictionary *nsDomainsByID;
@property (nonatomic, readonly) NSMutableDictionary *domainsByID;
@property (nonatomic, readonly) NSArray *providedItemsURLs;

- (id)description;
- (void)invalidate;
- (id)domainForIdentifier:(id)arg1;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (id)domainForURL:(id)arg1;
- (id)initWithDescriptor:(id)arg1 server:(id)arg2;
- (void)importDomainsFromDisk;
- (void)setEjectable:(_Bool)arg1 forDomainIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(_Bool)arg2;
- (id)providerDomainForNSDomain:(id)arg1;
- (void)reloadDomain:(id)arg1 unableToStartup:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeDomainProperties;
- (void)_startOrClearDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_supportsFPFS;
- (void)_writeDomainProperties;
- (void)_writeDomainPropertiesIfChangedFrom:(id)arg1;
- (id)defaultNSDomain;
- (id)newDomainFromNSDomain:(id)arg1;
- (void)_markDomainIfIndexShouldBeDropped:(id)arg1;
- (id)_recreateDefaultDomainIfNeeded;
- (void)addDomain:(id)arg1 byImportingDirectoryAtURL:(id)arg2 unableToStartup:(_Bool)arg3 reloadDomain:(_Bool)arg4 request:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_createSymlinkForDomain:(id)arg1;
- (void)setEnabled:(_Bool)arg1 forDomainIdentifier:(id)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dumpValue:(id)arg1 forKey:(id)arg2 to:(id)arg3;
- (void)addDomain:(id)arg1 byImportingDirectoryAtURL:(id)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeAllDomainsForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDomain:(id)arg1 options:(unsigned long long)arg2 request:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)enableAllDomainsIfNoUserElection;

@end
