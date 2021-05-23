/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSXPCConnection, VSIdentityProvider, VSOptional;

@interface VSDeveloperIdentityProviderChangeOperation : VSAsyncOperation

{
    VSIdentityProvider *_identityProvider;
    long long _changeKind;
    VSOptional *_result;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (nonatomic) long long changeKind;

- (id)init;
- (void)dealloc;
- (void)executionDidBegin;
- (id)_serviceWithErrorHandler:(CDUnknownBlockType)arg1;

@end
