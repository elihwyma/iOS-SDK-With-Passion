/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <Foundation/NSObject.h>

@class HSFairPlayInfo, NSString, NSURL, NSURLSession;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HSConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_activityTimerSource;
    NSURLSession *_connectionSession;
    unsigned int _databaseID;
    unsigned int _databaseRevision;
    unsigned int _basePlaylistContainerID;
    unsigned int _sessionID;
    NSURL *_baseURL;
    long long _connectionType;
    long long _connectionState;
    HSFairPlayInfo *_fairPlayInfo;
    NSString *_homeSharingGroupID;
}

@property (nonatomic) unsigned int basePlaylistContainerID;
@property (nonatomic) long long connectionState;
@property (nonatomic) unsigned int databaseID;
@property (nonatomic) unsigned int databaseRevision;
@property (nonatomic) unsigned int sessionID;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) long long connectionType;
@property (retain) HSFairPlayInfo *fairPlayInfo;
@property (copy) NSString *homeSharingGroupID;

- (void)dealloc;
- (void)disconnect;
- (id)initWithBaseURL:(id)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)signedRequestFromURLRequest:(id)arg1;
- (id)initWithBaseURL:(id)arg1 connectionType:(long long)arg2;
- (unsigned int)_sapVersionForConnectionType;
- (void)_continueFPSetupNegotiationWithData:(id)arg1 internalConnectionCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_sendRequest:(id)arg1 withInternalResponseHandler:(CDUnknownBlockType)arg2;
- (void)checkForDatabaseUpdatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onSerialQueue_sendRequest:(id)arg1 withInternalResponseHandler:(CDUnknownBlockType)arg2;
- (id)_onSerialQueue_connectionSession;

@end
