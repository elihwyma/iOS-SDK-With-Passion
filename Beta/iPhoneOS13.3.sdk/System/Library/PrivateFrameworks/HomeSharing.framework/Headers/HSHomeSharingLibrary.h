/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <Foundation/NSObject.h>

@class HSConnection, NSNetService, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface HSHomeSharingLibrary : NSObject

{
    NSObject<OS_dispatch_queue> *_connectionAccessQueue;
    _Bool _requiresPassword;
    _Bool _available;
    _Bool __hasPendingUpdateRequest;
    unsigned int _version;
    NSString *_name;
    NSString *_uniqueIdentifier;
    NSString *_homeSharingGroupID;
    NSURL *_baseURL;
    NSNetService *_service;
    long long _connectionType;
    HSConnection *_connection;
}

@property (nonatomic) _Bool _hasPendingUpdateRequest;
@property (retain, nonatomic) HSConnection *connection;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, readonly) _Bool requiresPassword;
@property (copy, nonatomic, readonly) NSString *homeSharingGroupID;
@property (retain, nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (retain, nonatomic) NSNetService *service;
@property (nonatomic, readonly) unsigned int databaseID;
@property (nonatomic, readonly) unsigned int basePlaylistContainerID;
@property (nonatomic, readonly) long long connectionType;
@property (nonatomic, readonly) long long connectionState;
@property (nonatomic, readonly) NSString *deviceGUID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)disconnect;
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)urlForRequest:(id)arg1;
- (id)securityInfoForURL:(id)arg1;
- (id)signedRequestFromURLRequest:(id)arg1;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned int)arg3 baseURL:(id)arg4 homeSharingGroupID:(id)arg5 connectionType:(long long)arg6;
- (void)_sendUpdateRequest;
- (void)_onQueue_ensureConnection;

@end
