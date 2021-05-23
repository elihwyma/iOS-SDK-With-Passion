/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCNetworkBehaviorMonitor, NSString;

@interface FCCKContentDatabase : NSObject

{
    _Bool _isProductionEnvironment;
    _Bool _shouldUseCloudd;
    _Bool _shouldUseSecureConnectionForCKAssetURLs;
    _Bool _shouldBypassCDNForCKAssetURLs;
    NSString *_containerIdentifier;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
}

@property (copy, nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) _Bool isProductionEnvironment;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, readonly) _Bool shouldUseCloudd;
@property (nonatomic) _Bool shouldUseSecureConnectionForCKAssetURLs;
@property (nonatomic) _Bool shouldBypassCDNForCKAssetURLs;

- (id)init;
- (void)addOperation:(id)arg1;
- (id)permanentURLForRecordID:(id)arg1 field:(long long)arg2;
- (id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(_Bool)arg2 networkBehaviorMonitor:(id)arg3;
- (id)initWithContextConfiguration:(id)arg1 networkBehaviorMonitor:(id)arg2;
- (id)permanentURLForRecordID:(id)arg1 field:(long long)arg2 useSecureConnection:(_Bool)arg3;

@end
