/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSArray, RERelevanceEngine;

@protocol NTKCUpNextDataSourcesManagerIdentifiersDelegate, OS_dispatch_queue;

@interface NTKCUpNextDataSourcesManager : NSObject

{
    RERelevanceEngine *_relevanceEngine;
    unsigned int _watchVersion;
    NSArray *_firstPartyDataSourceEntries;
    NSArray *_thirdPartyDataSourceEntries;
    NSArray *_sportsDataSourceEntries;
    id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> _firstPartyIdentifiersDelegate;
    id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> _thirdPartyIdentifiersDelegate;
    id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> _sportsIdentifiersDelegate;
    NSObject<OS_dispatch_queue> *_fetchQueue;
}

@property (copy) NSArray *firstPartyDataSourceEntries;
@property (copy) NSArray *sportsDataSourceEntries;
@property (copy) NSArray *thirdPartyDataSourceEntries;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *fetchQueue;
@property (nonatomic, readonly) unsigned int watchVersion;
@property (weak, nonatomic) id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> firstPartyIdentifiersDelegate;
@property (weak, nonatomic) id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> thirdPartyIdentifiersDelegate;
@property (weak, nonatomic) id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> sportsIdentifiersDelegate;

- (void)dealloc;
- (void)_buildRows;
- (void)_appsChangedNotification:(id)arg1;
- (void)_dataSourcesChangedNotification:(id)arg1;
- (void)fetchIdentifiers;
- (id)_dedupeAndSortFirstPartyDataSourcesFromIdentifiers:(id)arg1;
- (void)_phoneDedupeFromIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_preGraceThirdPartyBundleIdentifiers;
- (void)_dedupeAndSortThirdPartyDataSourcesFromIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_firstPartyDataSourceEntries;
- (void)_fetchThirdPartyBundleIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWatchVersion:(unsigned int)arg1;

@end
