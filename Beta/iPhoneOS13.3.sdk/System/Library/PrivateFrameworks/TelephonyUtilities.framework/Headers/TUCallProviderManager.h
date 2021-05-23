/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSString, TUCallProvider;

@protocol OS_dispatch_queue, TUCallProviderManagerDataSource;

@interface TUCallProviderManager : NSObject

{
    unsigned long long _type;
    NSObject<OS_dispatch_queue> *_queue;
    id <TUCallProviderManagerDataSource> _dataSource;
    NSMapTable *_delegateToQueue;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id <TUCallProviderManagerDataSource> dataSource;
@property (copy, nonatomic, readonly) NSDictionary *providersByIdentifier;
@property (retain, nonatomic) NSMapTable *delegateToQueue;
@property (nonatomic, readonly) TUCallProvider *tinCanProvider;
@property (nonatomic, readonly) TUCallProvider *defaultProvider;
@property (nonatomic, readonly) TUCallProvider *emergencyProvider;
@property (nonatomic, readonly) TUCallProvider *voicemailProvider;
@property (nonatomic, readonly) TUCallProvider *telephonyProvider;
@property (nonatomic, readonly) TUCallProvider *faceTimeProvider;
@property (copy, nonatomic, readonly) NSArray *providers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultProviders;
+ (int)serviceForProvider:(id)arg1 video:(_Bool)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)donateUserIntentForProviderWithIdentifier:(id)arg1;
- (void)providersChangedForDataSource:(id)arg1;
- (void)launchAppForDialRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDataSource:(id)arg1 type:(unsigned long long)arg2 queue:(id)arg3;
- (id)providerWithIdentifier:(id)arg1;
- (id)providerForFavoritesEntryActionBundleIdentifier:(id)arg1;
- (id)providersPassingTest:(CDUnknownBlockType)arg1;
- (id)initWithLocalProviders;
- (id)initWithPairedHostDeviceProviders;
- (id)providerWithService:(int)arg1 video:(_Bool *)arg2;
- (id)providerForRecentCall:(id)arg1;
- (id)providerForFavoritesEntry:(id)arg1;
- (id)dialRequestForRecentCall:(id)arg1;

@end
