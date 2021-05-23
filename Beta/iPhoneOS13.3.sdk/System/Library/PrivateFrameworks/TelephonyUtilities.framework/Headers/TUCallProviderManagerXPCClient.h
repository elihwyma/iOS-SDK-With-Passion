/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSXPCConnection;

@protocol OS_dispatch_queue, TUCallProviderManagerDataSourceDelegate;

@interface TUCallProviderManagerXPCClient : NSObject

{
    _Bool _requestedInitialState;
    int _token;
    id <TUCallProviderManagerDataSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSDictionary *_providersByIdentifier;
    NSDictionary *_localProvidersByIdentifier;
    NSDictionary *_pairedHostDeviceProvidersByIdentifier;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) int token;
@property (nonatomic) _Bool requestedInitialState;
@property (copy, nonatomic) NSDictionary *providersByIdentifier;
@property (copy, nonatomic) NSDictionary *localProvidersByIdentifier;
@property (copy, nonatomic) NSDictionary *pairedHostDeviceProvidersByIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool currentProcessCanAccessInitialState;
@property (weak, nonatomic) id <TUCallProviderManagerDataSourceDelegate> delegate;

+ (id)asynchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (void)setSynchronousServer:(id)arg1;
+ (id)callProviderManagerServerXPCInterface;
+ (id)callProviderManagerClientXPCInterface;
+ (id)callProviderManagerAllowedClasses;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)server;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_requestInitialState;
- (void)donateUserIntentForProviderWithIdentifier:(id)arg1;
- (id)serverWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3;
- (oneway void)updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3;
- (_Bool)openURL:(id)arg1 isSensitive:(_Bool)arg2 error:(id *)arg3;
- (void)launchAppForDialRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)blockUntilInitialStateReceived;

@end
