/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLSession, RMSFairPlaySession;

@protocol RMSDAAPRequestManagerDelegate;

__attribute__((visibility("hidden")))
@interface RMSDAAPRequestManager : NSObject

{
    NSURLSession *_urlSession;
    NSString *_hostName;
    NSString *_pairingGUID;
    NSString *_homeSharingGroupKey;
    long long _sessionIdentifier;
    long long _port;
    id <RMSDAAPRequestManagerDelegate> _delegate;
    RMSFairPlaySession *_fairPlaySession;
}

@property (copy, nonatomic) NSString *hostName;
@property (copy, nonatomic) NSString *pairingGUID;
@property (copy, nonatomic) NSString *homeSharingGroupKey;
@property (nonatomic) long long sessionIdentifier;
@property (nonatomic) long long port;
@property (weak, nonatomic) id <RMSDAAPRequestManagerDelegate> delegate;
@property (retain, nonatomic) RMSFairPlaySession *fairPlaySession;

- (id)init;
- (id)requestWithPath:(id)arg1 method:(id)arg2 postData:(id)arg3 queryArgs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)requestControlCommand:(id)arg1 text:(id)arg2 promptRevision:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
