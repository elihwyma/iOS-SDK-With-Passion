/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICClientInfo, ICUserIdentity, ICUserIdentityStore;

@interface ICUserCredentialRequest : NSObject <Swift>

{
    ICUserIdentity *_identity;
    ICUserIdentityStore *_identityStore;
    ICClientInfo *_clientInfo;
    long long _qualityOfService;
    double _timeoutInterval;
}

@property (copy, nonatomic, readonly) ICUserIdentity *identity;
@property (nonatomic, readonly) ICUserIdentityStore *identityStore;
@property (copy, nonatomic, readonly) ICClientInfo *clientInfo;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) double timeoutInterval;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3;

@end
