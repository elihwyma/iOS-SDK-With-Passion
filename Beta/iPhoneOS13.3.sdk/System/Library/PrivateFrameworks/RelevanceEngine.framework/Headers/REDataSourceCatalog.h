/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableDictionary, NSSet, REAppIconCache, REAppNameCache, REDataSourceManager;

@protocol OS_dispatch_queue;

@interface REDataSourceCatalog : NSObject

{
    REDataSourceManager *_dataSourceManager;
    NSCache *_iconCache;
    NSMutableDictionary *_localizedNameCache;
    NSObject<OS_dispatch_queue> *_queue;
    REAppIconCache *_appIconCache;
    REAppNameCache *_appNameCache;
}

@property (nonatomic, readonly) NSSet *dataSourceIdentifiers;
@property (nonatomic, readonly) NSSet *unrestrictedDataSourceIdentifiers;

- (void)dealloc;
- (id)initWithDataSourceManager:(id)arg1;
- (void)_applicationsStatesDidChange;
- (void)imageForApplicationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localizedNameForApplicationWithIdentifier:(id)arg1;
- (CDStruct_2ec95fd7)minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg1;
- (id)applicationIdentifierForDataSourceWithIdentifier:(id)arg1;
- (void)enumerateDataSources:(CDUnknownBlockType)arg1;
- (void)donatedAppIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (id)localAndRemoteAppIdentifiersForDataSourceIdentifiers:(id)arg1;
- (_Bool)imageForDataSourceWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localizedNameForDataSourceWithIdentifier:(id)arg1;
- (_Bool)wantsApplicationPrewarmForDataSourceWithIdentifier:(id)arg1;
- (_Bool)requiresLocationInUseAssertonForDataSourceWithIdentifier:(id)arg1;

@end
