/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _CDCachedPeopleSuggestion, _CDInteractionStoreNotificationReceiver, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings;

@protocol OS_dispatch_queue, _CDInteractionAdvising;

@interface _CDPeopleSuggester : NSObject

{
    id <_CDInteractionAdvising> _advisor;
    NSObject<OS_dispatch_queue> *_queue;
    _CDCachedPeopleSuggestion *_cache;
    _CDInteractionStoreNotificationReceiver *_receiver;
    int _settingsNotifyToken;
    _Bool _enableCaching;
    _CDPeopleSuggesterContext *_context;
    _CDPeopleSuggesterSettings *_settings;
    double _cacheTimeoutSeconds;
}

@property _Bool enableCaching;
@property double cacheTimeoutSeconds;
@property (retain) _CDPeopleSuggesterContext *context;
@property (retain) _CDPeopleSuggesterSettings *settings;

+ (id)peopleSuggesterWithDirectDBAccess;
+ (id)createAdvisorSettingsFromContext:(id)arg1 settings:(id)arg2;
+ (id)restrictedPrefixForPrefix:(id)arg1;
+ (id)peopleSuggester;
+ (id)peopleSuggesterUsingDaemon;
+ (id)loggingTagForAutocompleteFeedback;

- (id)init;
- (id)initWithAdvisor:(id)arg1;
- (void)updateSettings;
- (void)invalidateCache;
- (id)suggestPeopleWithError:(id *)arg1;
- (void)suggestPeopleWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
