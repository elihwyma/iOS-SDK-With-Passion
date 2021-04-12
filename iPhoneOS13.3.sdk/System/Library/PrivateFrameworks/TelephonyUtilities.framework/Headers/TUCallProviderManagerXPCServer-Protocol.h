//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, TUDialRequest;
@protocol TUCallProviderManagerXPCClient;

@protocol TUCallProviderManagerXPCServer <NSObject>
- (void)unregisterClient:(id <TUCallProviderManagerXPCClient>)arg1;
- (void)registerClient:(id <TUCallProviderManagerXPCClient>)arg1;
- (oneway void)launchAppForDialRequest:(TUDialRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)donateUserIntentForProviderWithIdentifier:(NSString *)arg1;
- (oneway void)providersByIdentifier:(void (^)(NSDictionary *, NSDictionary *, NSDictionary *))arg1;
@end

