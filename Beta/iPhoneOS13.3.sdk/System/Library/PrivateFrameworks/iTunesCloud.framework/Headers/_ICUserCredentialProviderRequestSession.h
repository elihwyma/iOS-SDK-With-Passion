/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICUserIdentityProperties, ICUserIdentityStore, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary;

@interface _ICUserCredentialProviderRequestSession : NSObject

{
    ICUserIdentityProperties *_activeICloudAccountProperties;
    NSArray *_credentialRequests;
    NSMapTable *_delegationCredentialRequestToSpecificUserIdentity;
    NSMapTable *_delegationCredentialRequestToIdentityProperties;
    NSMutableDictionary *_delegationUserIdentityToUUIDs;
    long long _maximumQualityOfService;
    NSMutableArray *_pendingPropertyLoadCredentialRequests;
    NSMutableArray *_pendingResponseCredentialRequests;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) ICUserIdentityProperties *activeICloudAccountProperties;
@property (copy, nonatomic, readonly) NSArray *credentialRequests;
@property (retain, nonatomic) NSMapTable *delegationCredentialRequestToSpecificUserIdentity;
@property (retain, nonatomic) NSMapTable *delegationCredentialRequestToIdentityProperties;
@property (retain, nonatomic) NSMutableDictionary *delegationUserIdentityToUUIDs;
@property (nonatomic, readonly) ICUserIdentityStore *identityStore;
@property (nonatomic, readonly) long long maximumQualityOfService;
@property (retain, nonatomic) NSMutableArray *pendingPropertyLoadCredentialRequests;
@property (retain, nonatomic) NSMutableArray *pendingResponseCredentialRequests;
@property (nonatomic, readonly) _Bool hasPendingResponses;
@property (copy, nonatomic, readonly) CDUnknownBlockType responseHandler;

- (id)initWithCredentialRequests:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;

@end
