/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

#import <iTunesStoreUI/Swift-Protocol.h>

@class NSNumber, NSString, SUClientInterface, SUSectionsResponse;

@interface SULoadSectionsOperation : ISOperation <Swift>

{
    NSString *_activeSectionVersionString;
    SUClientInterface *_clientInterface;
    SUSectionsResponse *_sectionsResponse;
    _Bool _shouldUseCache;
}

@property (copy) NSString *activeSectionVersionString;
@property _Bool shouldUseCache;
@property (readonly) SUSectionsResponse *sectionsResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;

- (id)init;
- (void)dealloc;
- (void)run;
- (id)initWithClientInterface:(id)arg1;
- (_Bool)_loadSectionsFromNetworkWithDictionary:(id)arg1;
- (id)_cachePathForVersion:(id)arg1 create:(_Bool)arg2;
- (void)_setSectionsResponse:(id)arg1;
- (_Bool)_loadSectionsFromCacheForVersion:(id)arg1;
- (void)_writeSectionsResponseToCache:(id)arg1 forVersion:(id)arg2;

@end
