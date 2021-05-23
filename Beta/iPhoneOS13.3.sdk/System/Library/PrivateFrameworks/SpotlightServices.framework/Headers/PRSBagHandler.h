/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class GEOUserSessionEntity, NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, PARBag, PRSRankingServerKnobs, SSPlistDataReader;

@protocol OS_dispatch_group, OS_dispatch_queue, PRSSessionController;

@interface PRSBagHandler : NSObject

{
    _Bool _waitingForLocation;
    NSObject<OS_dispatch_group> *_locationGroup;
    id _lockObject;
    NSMutableArray *_tasks;
    PARBag *_bag;
    NSObject<OS_dispatch_queue> *_bagQueue;
    _Bool _active;
    _Bool _disableAsTypedSuggestion;
    _Bool _collectAnonymousData;
    _Bool _collectScores;
    _Bool _use2LayerRanking;
    _Bool _bagEnabled;
    _Bool _resourceMetadataNeedsWrite;
    id <PRSSessionController> _client;
    long long _status;
    double _searchRenderTimeout;
    double _suggestionsRenderTimeout;
    SSPlistDataReader *_cep_server_values;
    PRSRankingServerKnobs *_ranking_server_knobs;
    NSSet *_appBlacklist;
    NSArray *_enabledDomains;
    NSArray *_anonymousMetadataUndesiredBundleIDs;
    NSString *_fteLocString;
    NSString *_fteLearnMoreString;
    NSString *_fteContinueString;
    NSArray *_suggestionRankerModelParams;
    NSString *_lookupFirstUseDescription1;
    NSString *_lookupFirstUseDescription2;
    NSString *_lookupFirstUseLearnMore;
    GEOUserSessionEntity *_geoUserSessionEntity;
    NSMutableDictionary *_resourceMetadata;
    NSString *_resourceMetadataPath;
    NSObject<OS_dispatch_queue> *_resourceFetchQueue;
}

@property (nonatomic) long long status;
@property (retain, nonatomic) NSMutableDictionary *resourceMetadata;
@property (nonatomic) _Bool resourceMetadataNeedsWrite;
@property (retain, nonatomic) NSString *resourceMetadataPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceFetchQueue;
@property (weak) id <PRSSessionController> client;
@property (nonatomic) _Bool active;
@property double searchRenderTimeout;
@property double suggestionsRenderTimeout;
@property (retain) SSPlistDataReader *cep_server_values;
@property (retain) PRSRankingServerKnobs *ranking_server_knobs;
@property (retain, nonatomic) NSSet *appBlacklist;
@property (retain, nonatomic) NSArray *enabledDomains;
@property (nonatomic) _Bool disableAsTypedSuggestion;
@property (nonatomic) _Bool collectAnonymousData;
@property (nonatomic) _Bool collectScores;
@property (retain, nonatomic) NSArray *anonymousMetadataUndesiredBundleIDs;
@property (nonatomic) _Bool use2LayerRanking;
@property (retain, nonatomic) NSString *fteLocString;
@property (retain, nonatomic) NSString *fteLearnMoreString;
@property (retain, nonatomic) NSString *fteContinueString;
@property (retain, nonatomic) NSArray *suggestionRankerModelParams;
@property (nonatomic, readonly) NSString *lookupFirstUseDescription1;
@property (nonatomic, readonly) NSString *lookupFirstUseDescription2;
@property (nonatomic, readonly) NSString *lookupFirstUseLearnMore;
@property (nonatomic, readonly, getter=isBagEnabled) _Bool bagEnabled;
@property (readonly) GEOUserSessionEntity *geoUserSessionEntity;

+ (void)initialize;
+ (id)sharedHandler;

- (id)init;
- (_Bool)isEnabled;
- (void)removeTask:(id)arg1;
- (void)activate;
- (void)deactivate;
- (id)applicationNameForUserAgent;
- (void)updateWithDictionary:(id)arg1;
- (id)supportedServices;
- (id)userId;
- (void)updateFromSession:(id)arg1 bag:(id)arg2 forClient:(id)arg3 error:(id)arg4;
- (void)getFTEStringsWithReply:(CDUnknownBlockType)arg1;
- (id)_base64CEPDataNoCopyFromFeatureData:(id)arg1;
- (void)_processQIFeatures:(id)arg1 forClient:(id)arg2;
- (id)excludedDomainIdentifiers;
- (void)parseCEPFromData:(id)arg1 forClient:(id)arg2;
- (void)fetchModifiedResourceFromSession:(id)arg1 resource:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)triggerTaskWhenReady:(id)arg1;
- (_Bool)searchSupported:(_Bool)arg1;
- (_Bool)sessionReady;
- (_Bool)isLocaleSupported:(id)arg1;
- (void)updateWithBagDictionary:(id)arg1 error:(id)arg2;
- (void)refreshGUID;

@end
