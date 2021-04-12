//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServer.h>

@class HMDDAccessoryServerBrowserDemo, NSDictionary, NSNumber;

@interface HMDDAccessoryServerDemo : HAPAccessoryServer
{
    BOOL __paired;
    BOOL __hasPairings;
    NSNumber *_category;
    NSDictionary *_accessoryInfo;
    HMDDAccessoryServerBrowserDemo *_browser;
}

@property(nonatomic) BOOL _hasPairings; // @synthesize _hasPairings=__hasPairings;
@property(nonatomic) BOOL _paired; // @synthesize _paired=__paired;
@property(nonatomic) __weak HMDDAccessoryServerBrowserDemo *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) NSDictionary *accessoryInfo; // @synthesize accessoryInfo=_accessoryInfo;
- (void)setCategory:(id)arg1;
- (id)category;
// - (void).cxx_destruct;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (void)handleUpdatesForCharacteristics:(id)arg1;
- (void)identifyWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)tryPairingPassword:(id)arg1 error:(id )arg2;
- (BOOL)stopPairingWithError:(id )arg1;
- (void)continuePairingAfterAuthPrompt;
- (void)startPairingWithConsentRequired:(BOOL)arg1 config:(id)arg2 ownershipToken:(id)arg3;
- (void)processCharacteristicWrite:(id)arg1 value:(id)arg2;
- (void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3 queue:(id)arg4;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_parseAttributeDatabase:(id)arg1;
- (void)discoverAccessories;
- (long long)linkType;
- (id)initWithName:(id)arg1 identifier:(id)arg2 deviceInfo:(id)arg3 paired:(BOOL)arg4 keyStore:(id)arg5 browser:(id)arg6;
- (id)initCommon:(id)arg1 browser:(id)arg2;
- (BOOL)hasPairings;
- (BOOL)isPaired;

@end

