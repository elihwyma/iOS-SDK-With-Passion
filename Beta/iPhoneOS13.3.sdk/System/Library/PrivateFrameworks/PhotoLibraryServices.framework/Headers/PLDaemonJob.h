/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, PLAssetsdClient, PLLibraryServicesManager, PLXPCTransaction;

@protocol OS_xpc_object;

@interface PLDaemonJob : NSObject

{
    NSObject<OS_xpc_object> *_xpcReply;
    PLXPCTransaction *_transaction;
    CDUnknownBlockType _replyHandler;
    unsigned long long _signpostId;
    PLLibraryServicesManager *_libraryServicesManager;
    NSXPCConnection *_clientConnection;
    PLAssetsdClient *_assetsdClient;
}

@property (nonatomic) NSObject<OS_xpc_object> *xpcReply;
@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (retain, nonatomic) PLLibraryServicesManager *libraryServicesManager;
@property (copy, nonatomic) CDUnknownBlockType replyHandler;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcReply;
@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (nonatomic, readonly) PLAssetsdClient *assetsdClient;
@property (nonatomic, readonly) NSString *jobDescription;

+ (_Bool)supportsSecureCoding;
+ (void)runDaemonSideWithXPCEvent:(id)arg1 libraryServicesManager:(id)arg2;

- (id)init;
- (void)run;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAssetsdClient:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (_Bool)shouldArchiveXPCToDisk;
- (_Bool)shouldRunOnDaemonSerialQueue;
- (void)handleReply;
- (void)archiveXPCToDisk:(id)arg1;
- (void)sendToAssetsd;
- (void)sendToAssetsdWithReply;
- (id)newDictionaryReplyForObject:(id)arg1;

@end
