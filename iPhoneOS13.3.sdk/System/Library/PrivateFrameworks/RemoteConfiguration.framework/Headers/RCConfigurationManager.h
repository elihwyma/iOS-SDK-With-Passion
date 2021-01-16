//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL, RCAsyncSerialQueue, RCConfigurationSettings, RCDeviceInfo, RCKeyValueStore;

@interface RCConfigurationManager : NSObject
{
    RCConfigurationSettings *_configurationSettings;
    RCDeviceInfo *_deviceInfo;
    NSURL *_contentDirectoryURL;
    RCAsyncSerialQueue *_configRequestSerialQueue;
    RCKeyValueStore *_localStore;
    NSMutableDictionary *_configResourceByRequestKey;
}

@property(retain, nonatomic) NSMutableDictionary *configResourceByRequestKey; // @synthesize configResourceByRequestKey=_configResourceByRequestKey;
@property(retain, nonatomic) RCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(retain, nonatomic) RCAsyncSerialQueue *configRequestSerialQueue; // @synthesize configRequestSerialQueue=_configRequestSerialQueue;
@property(retain, nonatomic) NSURL *contentDirectoryURL; // @synthesize contentDirectoryURL=_contentDirectoryURL;
@property(retain, nonatomic) RCDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) RCConfigurationSettings *configurationSettings; // @synthesize configurationSettings=_configurationSettings;
// - (void).cxx_destruct;
- (id)_decodeConfigurationResource:(id)arg1;
- (id)_encodeConfigurationResource:(id)arg1;
- (void)_removeConfigurationResourceForRequestKey:(id)arg1;
- (void)_saveConfigurationResource:(id)arg1;
- (void)_loadConfigurationResourcesFromStore;
- (void)_fetchConfigurationFromFallbackURLWithSettings:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_endpointURLForEnvironment:(NSUInteger)arg1 requestKey:(id)arg2;
- (void)_fetchMultiConfigurationFromEndpointURL:(id)arg1 settings:(id)arg2 changeTagsByRequestKey:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (BOOL)_isAllowedToReachEndpointWithSettings:(id)arg1 configurationResource:(id)arg2 endpointURL:(id)arg3;
- (BOOL)_isValidConfigurationResource:(id)arg1 allowedToReachEndpoint:(BOOL)arg2 useBackgroundRefreshRate:(BOOL)arg3;
- (BOOL)_areAllConfigurationResourcesInvalid:(id)arg1 allowedToReachEndpoint:(BOOL)arg2 useBackgroundRefreshRate:(BOOL)arg3 requestKeys:(id)arg4;
- (BOOL)_areAllConfigurationResourcesAvailable:(id)arg1 requestKeys:(id)arg2;
- (void)fetchMultiConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchSingleConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)initWithContentDirectoryURL:(id)arg1;

@end
